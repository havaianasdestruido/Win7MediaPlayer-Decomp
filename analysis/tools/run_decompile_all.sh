#!/usr/bin/env bash
# run_decompile_all.sh — reproducible batch driver for analysis/tools/decompile.py
#
# Runs the angr-based recovery over every PE image in bin/, one module per
# invocation, with a hard per-module timeout so a pathological CFG cannot stall
# the whole batch.  Per-module logs are kept under analysis/report/data/decompile-logs/.
#
# Usage:  bash analysis/tools/run_decompile_all.sh [max_functions] [per_module_timeout_secs]
set -u
REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
MAXFN="${1:-60}"
TMO="${2:-2400}"
LOGDIR="$REPO/analysis/report/data/decompile-logs"
mkdir -p "$LOGDIR"
cd "$REPO"
for f in bin/*.exe bin/*.dll bin/*.DLL bin/pt-BR/*.mui; do
  [ -e "$f" ] || continue
  slug="$(basename "$f" | tr 'A-Z' 'a-z' | tr -c 'a-z0-9' '_' | sed 's/_*$//')"
  log="$LOGDIR/$slug.log"
  if [ -f "$REPO/src/$slug/decompiled/index.json" ] && grep -q '"status": "complete"' "$REPO/src/$slug/decompiled/index.json"; then
    echo "skip $slug (already complete)"; continue
  fi
  echo "=== $slug ($f) $(date -u +%H:%M:%S) ==="
  timeout "$TMO" python3 analysis/tools/decompile.py "$f" --max-functions "$MAXFN" > "$log" 2>&1
  code=$?
  echo "    exit=$code  $(tail -1 "$log" | head -c 160)"
done
echo "=== batch finished $(date -u +%H:%M:%S) ==="

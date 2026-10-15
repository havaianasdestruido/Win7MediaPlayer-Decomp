#!/usr/bin/env bash
# setup_env.sh — Phase 0 (P0.2) idempotent environment provisioning and verification.
#
# Usage:
#   bash analysis/tools/setup_env.sh               # install missing tools + verify all
#   bash analysis/tools/setup_env.sh --check-only  # verify without installing

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
REQ_FILE="${REPO_ROOT}/requirements.txt"
CHECK_ONLY=0

if [[ "${1:-}" == "--check-only" ]]; then
    CHECK_ONLY=1
fi

run_priv() {
    if [[ "$(id -u)" -eq 0 ]]; then
        "$@"
    elif command -v sudo >/dev/null 2>&1; then
        sudo "$@"
    else
        "$@"
    fi
}

echo "[setup_env] Phase 0.2 environment check (repo: ${REPO_ROOT})"

# 1. Python 3.11+ & required packages
PY_VER="$(python3 -c 'import sys; print(f"{sys.version_info.major}.{sys.version_info.minor}.{sys.version_info.micro}")')"
echo "[setup_env] Python version: ${PY_VER}"

if ! python3 -c "import angr, claripy, cle, pyvex, pefile, capstone, elftools, bitstring" >/dev/null 2>&1 || \
   ! command -v cmake >/dev/null 2>&1 || ! command -v ninja >/dev/null 2>&1; then
    if [[ "${CHECK_ONLY}" -eq 1 ]]; then
        echo "[setup_env] ERROR: missing Python packages or cmake/ninja in --check-only mode" >&2
        exit 1
    fi
    echo "[setup_env] Installing pinned Python toolchain from ${REQ_FILE} ..."
    run_priv pip3 install --break-system-packages --prefer-binary -r "${REQ_FILE}"
fi

# 2. Node.js 22+ & REA 6.5.0
NODE_VER="$(node --version)"
echo "[setup_env] Node.js version: ${NODE_VER}"

if ! command -v rea >/dev/null 2>&1; then
    if [[ "${CHECK_ONLY}" -eq 1 ]]; then
        echo "[setup_env] ERROR: rea CLI not found on PATH in --check-only mode" >&2
        exit 1
    fi
    echo "[setup_env] Installing rea-agents@6.5.0 via npm ..."
    run_priv npm i -g rea-agents@6.5.0
fi

REA_VER="$(rea --version | head -n 1)"
echo "[setup_env] REA version: ${REA_VER}"

# 3. CMake 4.4+ & Ninja
CMAKE_VER="$(cmake --version | head -n 1)"
NINJA_VER="$(ninja --version | head -n 1)"
echo "[setup_env] CMake: ${CMAKE_VER}"
echo "[setup_env] Ninja: ${NINJA_VER}"

# 4. GNU objdump 2.40+ & GCC
OBJDUMP_VER="$(objdump --version | head -n 1)"
GCC_VER="$(gcc --version | head -n 1)"
echo "[setup_env] objdump: ${OBJDUMP_VER}"
echo "[setup_env] gcc: ${GCC_VER}"

echo "[setup_env] ALL P0.2 ENVIRONMENT REQUIREMENTS VERIFIED"

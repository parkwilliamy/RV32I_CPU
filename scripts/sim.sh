#!/bin/bash
# ============================================================
# sim.sh — Vivado simulation with unique waveform file names
# Usage: ./sim.sh <top_module_name>
# ============================================================

if [ -z "$1" ]; then
    echo "Usage: $0 <top_module_name>"
    exit 1
fi

TOP="$1"
OUT_DIR="out"
mkdir -p "$OUT_DIR"

# Generate timestamp (YYYYMMDD_HHMMSS)
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")

# Build waveform filename dynamically
WAVE="${OUT_DIR}/${TOP}_${TIMESTAMP}.wdb"

# ---- Clean up old intermediate files (keep old .wdb files) ----
rm -rf xsim.dir *.log *.pb *.jou

echo "==> Compiling sources..."
xvlog -sv rtl/units/*.v tb/units/*.sv || { echo "❌ Compile failed"; exit 1; }

echo "==> Elaborating top module: $TOP"
xelab -debug typical "$TOP" -s "${TOP}_sim" || { echo "❌ Elaboration failed"; exit 1; }

# ---- Run simulation ----
echo "==> Running simulation for $TOP..."
echo "==> Waveform will be saved as $WAVE"
xsim "${TOP}_sim" -tclbatch scripts/sim.tcl -wdb "$WAVE"

echo "✅ Simulation complete. Waveform saved as $WAVE"

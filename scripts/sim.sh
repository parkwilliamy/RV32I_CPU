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

# Keep only 4 most recent .wdb files (5 total once the new one is written)
MAX_FILES=4

# Sort by modification time (oldest first), then delete all but newest 5
WDB_COUNT=$(ls -1t "$OUT_DIR"/*.wdb 2>/dev/null | wc -l)
if [ "$WDB_COUNT" -gt "$MAX_FILES" ]; then
    ls -1t "$OUT_DIR"/*.wdb | tail -n +$((MAX_FILES + 1)) | xargs rm -f
fi

# Generate timestamp (YYYYMMDD_HHMMSS)
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")

# Build waveform filename dynamically
WAVE="${OUT_DIR}/${TOP}_${TIMESTAMP}.wdb"

# ---- Clean up old intermediate files (keep old .wdb files) ----
rm -rf xsim.dir *.log *.pb *.jou

echo "==> Compiling sources..."
xvlog -sv rtl/*.v tb/module/*.sv tb/pipe/*.sv || { echo "❌ Compile failed"; exit 1; }

echo "==> Elaborating top module: $TOP"
xelab -debug typical "$TOP" -s "${TOP}_sim" || { echo "❌ Elaboration failed"; exit 1; }

# ---- Run simulation ----
echo "==> Running simulation for $TOP..."
echo "==> Waveform will be saved as $WAVE"
xsim "${TOP}_sim" -tclbatch scripts/sim.tcl -wdb "$WAVE"

echo "✅ Simulation complete. Waveform saved as $WAVE"

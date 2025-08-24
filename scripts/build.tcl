set part xc7a35tcpg236-1

if {[catch {read_verilog [glob ../rtl/units/*.v]} result]} {
    puts stderr "Synthesis failed: $result"
    exit 1
}

read_xdc ../synth/Basys-3-Master.xdc
synth_design -top led_test -part $part

if {[catch {opt_design} result]} {
    puts stderr "Synthesis failed: $result"
    exit 1
}

if {[catch {place_design} result]} {
    puts stderr "Synthesis failed: $result"
    exit 1
}

if {[catch {route_design} result]} {
    puts stderr "Synthesis failed: $result"
    exit 1
}


report_timing_summary -file ../out/timing.rpt
report_utilization     -file ../out/util.rpt
write_bitstream -force ../out/RV32I.bit

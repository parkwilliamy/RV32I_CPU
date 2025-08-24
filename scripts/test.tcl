set part xc7a35tcpg236-1

puts "checkpoint 1"

if {[catch {read_verilog [glob ../rtl/*.v]} result]} {
    puts stderr "Synthesis failed: $result"
    exit 1
}
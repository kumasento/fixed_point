
`timescale 1ns/1ps

module fixed_mult_tb();

localparam L = 16;
wire [L-1:0] a;
wire [L-1:0] b;
wire [L-1:0] out;

reg [L-1:0] a_reg;
reg [L-1:0] b_reg;

initial begin
  $display("Hello World!");
  a_reg = 16'hFFFF;
  b_reg = 16'hFFFF;

  #20 $display(out);
end

assign a = a_reg;
assign b = b_reg;

fixed_mult DUT (
  .a(a),
  .b(b),
  .out(out)
);

endmodule

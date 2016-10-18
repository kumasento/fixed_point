module fixed_mult
#(
  parameter L = 16
)
(
  input  wire [L - 1: 0] a,
  input  wire [L - 1: 0] b,
  output wire [L - 1: 0] out
);

reg [2 * L - 1: 0] tmp;
reg [L - 1: 0] out_reg;

always @(a or b) begin
  tmp = a * b;
  out_reg = { tmp[31], tmp[L + 14: L] };
end

assign out = out_reg;

endmodule

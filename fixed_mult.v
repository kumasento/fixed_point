/**
 * fixed_mult: fixed point multiplication module
 * the fixed point data format is specifed by M and N
 * which are two parameters in the Q number format
 */
module fixed_mult
#(
  parameter N = 23, // fraction bits
  parameter M = 8   // integer bits
)
(
  input  wire [N+M:0] a,
  input  wire [N+M:0] b,
  output wire [N+M:0] out
);

reg [2*(N+M+1): 0] tmp;

always @(a or b) begin
  tmp = a * b;
end

assign out = { tmp[31], tmp[N+14:N] };

endmodule

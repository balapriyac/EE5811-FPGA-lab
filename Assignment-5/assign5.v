module assign5(
input wire x,
input wire y,
input wire z,

output wire redled,
output wire greenled,
output wire blueled
);


reg f;
always @(*)
begin
f = !(x & (!y));
if(f == 1)
begin
redled = 1;
end
else
begin
redled = 0;
end
end
endmodule

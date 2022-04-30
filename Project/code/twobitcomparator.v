module twobitcomparator(
input wire a1,
input wire a0,
input wire b1,
input wire b0,

output wire redled,
output wire greenled,
output wire blueled
);


reg agb,alb,aeb;
always @(*)
begin
agb = (a1&(!b1))|(a0&(!b1)&(!b0))|(a1&a0&(!b0));
alb = ((!a1)&b1)|((!a0)&b1&b0)|((!a1)&(!a0)&b0);
aeb = !(a1^b1)|!(a0^b0);

if(agb == 1)
begin
greenled = 1;
end
else
begin
greenled = 0;
end

if(alb == 1)
begin
redled = 1;
end
else
begin
redled = 0;
end

if(aeb == 1)
begin
blueled = 1;
end
else
begin
blueled = 0;
end

end
endmodule
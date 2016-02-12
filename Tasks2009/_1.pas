var n,k:integer;
function fac(i)
begin
var s:integer;
if i=0 then s=1;
else
s=i*fac(i-1);
return s;
end;

begin
readln (n);
writeln(fac(n));
end.
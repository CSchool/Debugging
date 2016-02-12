var n:integer;
function fac(i:integer):integer;
var s:integer;
begin

if i=0 then s:=1
else
s:=i*fac(i-1);
fac:=s;
end;

begin
readln (n);
writeln(fac(n));
end.
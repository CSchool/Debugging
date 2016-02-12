var n,k:integer;

function cycle(i:integer):integer;
var  j:integer;
begin
 for j:=1 to k do
  begin
    writeln(j);
    if i>1 then cycle(i-1);
    writeln;
  end;
end;

begin
readln(n,k);
cycle(n);
end.
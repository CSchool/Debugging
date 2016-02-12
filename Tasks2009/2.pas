var n,k:integer; a:array[1..10] of integer;

procedure cycle(i:integer);
var  j,u:integer;
begin
  if i=0 then begin
    for u:=1 to n do
       begin
          write(a[u], ' ');
       end;
    writeln;
  end
  else
    for j:=1 to k do
       begin
          a[i]:=j;
          cycle(i-1);
       end;
end;

begin
readln(n,k);
cycle(n);
end.
var n,k:integer; a:array[1..10] of integer;

procedure cycle(i:integer);
var  j,u:integer;
begin
 for j:=1 to k do
  begin
    if i=1 then
        for u:=1 to n do
         begin
          writeln(a[u]);
          writeln;
         end
     else
      begin
         a[i]:=j;
         cycle(i-1);
      end;
  end;
end;

begin
readln(n,k);
cycle(n);
end.
{
Составьте программу вычисления в массиве А(N) произведения нечётных элементов.
}
var
  p,n:integer;
  a:array[1..100] of integer;

begin
 read(n);
 while i < n do begin
  read(a[i]);
  i:=i+1;
 end;
 
 for i:=1 to n do 
  if i mod 2 = 1 then
   p:=p * a[i];

 writeln(p);
end.

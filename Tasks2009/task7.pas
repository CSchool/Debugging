{
Составьте программу заполнения массива числами:
-2, 4, -6, 8, -10, 12, -14, 16, -18, 20 без использования клавиатуры.
}
var
 a:array[0..9]of integer;
 i,b:integer;

begin
 for i:=1 to 10 do begin
   a[i]:=i * 2 * b;
   if (b = -1) then b:=1;
   if (b = 1) then b:=-1;
 end;

 for i:=1 to 10 do write(a[i]);
end.
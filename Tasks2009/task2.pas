{
Contest1:

Вводятся два числа N и K. Выведите количество чисел из диапазона от 1 до N 
включительно таких, что их сумма цифр делится на K. 


Пример ввода
100 3 

Пример вывода
33 

Пример ввода
22 4 

Пример вывода
5
}
var s,i,a,n,k,z:integer;

begin
 read(n,k);
 for i:=1 to n do
 begin
  a:=i;
  while a<>0 do
  begin
   s:=a mod 10;
   a:=a div 10;
  end;
  if i mod k=0 then z:=z+1;
 end;
 writeln(z);
end.

{
Contest1:

�������� ��� ����� N � K. �������� ���������� ����� �� ��������� �� 1 �� N 
������������ �����, ��� �� ����� ���� ������� �� K. 


������ �����
100 3 

������ ������
33 

������ �����
22 4 

������ ������
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

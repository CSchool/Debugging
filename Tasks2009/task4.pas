{
�������� �� ����� �������� ������? 

�������� �����. ���������� YES, ���� ��� �������� �������� ������, NO - ����� 

������ �������� �����
8 

������ ��������� ����� 
YES 


������ �������� ����� 
2147483647 

������ ��������� ����� 
NO

}

var a, j: integer;
    b: boolean;
begin
 readln(a);
 j:=1;
 b:=false;
 while j<=a do begin
   j:=j * 2;
   if j = a then b:=true;
 end;
 if b=true then 
   writeln('YES')
 else 
   writeln('NO');
end.

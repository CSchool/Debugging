/*
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
*/
#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int j = 1;
    bool b = false;
    while (j <= a)
    {
        j *= 2;
        if (j == a)
            b = true;
    }
    if (b)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

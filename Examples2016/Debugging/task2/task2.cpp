/*
�������� ��� ����� N � K. �������� ���������� ����� �� ��������� �� 1 �� N 
������������ �����, ��� �� ����� ���� ������� �� K. 
*/
#include <iostream>

int s, a, n, k, z;

int main()
{
    std::cin >> n >> k;
    for (int i = 1 ; i < n ; ++i)
    {
        a = i;
        while (a != 0)
        {
            s = a % 10;
            a = a / 10;
        }
        if (i % k == 0)
            ++z;
    }
    std::cout << z;
}

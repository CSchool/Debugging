/*
Вывести все простые числа от M до N включительно.

Ввод
В первой строке находятся разделённые пробелом M и N.
Вывод
Вывести числа в порядке возрастания, по одному в строке. Если между M и N включительно нет простых - вывести "Absent".
Ограничения
2 <= M <= N <= 300 000
*/
#include <iostream>

int a[100], b[100];
int m, n, l, p;

int main()
{
    std::cin >> n >> m;

    for (int i = n ; i <= m ; ++i)
        if (i % 2)
        {
            a[l] = i;
            ++l;
        }

    p = 1;
    for (int i = 0 ; i < l ; ++i)
        if (a[i] != -1)
        {
            b[p] = a[i];
            ++p;
            for (int j = 0 ; j < l ; ++j)
                if (a[j] % a[i] == 0 && a[i] != a[j] && a[j] != -1)
                    a[j] = -1;
        }
    for (int i = 1 ; i <= m ; ++i)
        if (b[i] == 3)
        {
            b[0] = 2;
            break;
        }

    if (b[0] == 0)
        std::cout << "Absent\n";
    else
        for (int i = 0 ; i < p ; ++i)
            if (b[i] >= n)
                std::cout << b[i] << "\n";
}

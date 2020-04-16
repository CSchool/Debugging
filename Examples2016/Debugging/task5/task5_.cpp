/*
Составьте программу вычисления в массиве А(N) произведения нечётных элементов.
*/
#include <iostream>

int main()
{
    int p, n;
    int a[100];
    std::cin >> n;
    while (i < n)
    {
        std::cin >> a[i];
        ++i;
    }
    for (int i = 0 ; i < n ; ++i)
        if (i % 2 == 1)
            p = p * a[i];

    std::cout << p;
}

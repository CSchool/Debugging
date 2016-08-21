/*
Составьте программу удаления второго элемента массива C(N), 
если N лежит в диапазоне 1..100
*/
#include <iostream>

int main()
{
    int c[10];
    int n, t;

    std::cin >> n;

    for (int i = 0 ; i < n ; ++i)
        std::cin >> c[n];

    for (int i = 2 ; i < n ; ++i)
        c[i + 1] = c[i];

    for (int i = 0 ; i < n ; ++i)
        std::cout << c[i] << ' ';
}

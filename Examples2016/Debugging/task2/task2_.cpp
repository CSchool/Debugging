/*
Вводятся два числа N и K. Выведите количество чисел из диапазона от 1 до N 
включительно таких, что их сумма цифр делится на K. 
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

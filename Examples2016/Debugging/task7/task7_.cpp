/*
Составьте программу заполнения массива числами:
-2, 4, -6, 8, -10, 12, -14, 16, -18, 20 без использования клавиатуры.
*/
#include <iostream>

int main()
{
    int a[10];
    int b;

    for (int i = 1 ; i <= 10 ; ++i)
    {
        a[i] = i * 2 * b;
        if (b = -1)
            b = 1;
        if (b = 1)
            b = -1;
    }

    for (int i = 0 ; i < 10 ; ++i)
        std::cout << a[i];
}

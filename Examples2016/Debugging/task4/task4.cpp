/*
Является ли число степенью двойки? 

Вводится число. Напечатать YES, если оно является степенью двойки, NO - иначе 

Пример входного файла
8 

Пример выходного файла 
YES 

Пример входного файла 
2147483647 

Пример выходного файла 
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

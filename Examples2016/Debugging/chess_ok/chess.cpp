/*
  Определить одного ли цвета клетки шахматной доски.
*/
#include <iostream>

int main()
{
    int ai, aj;
    int bi, bj;
    std::cin >> ai >> aj;
    std::cin >> bi >> bj;
    int color1 = (ai + aj) % 2;
    int color2 = (bi + bj) % 2;
    std::cout << (color1 == color2 ? "YES" : "NO");
}

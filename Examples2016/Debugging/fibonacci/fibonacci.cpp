#include <iostream>
#include <string>

using namespace std;

char fib(int n, int d)
{
    if (n <= 1)
        return 1;
    char f1 = fib(n - 1, d+1);
    char f2 = fib(n - 2, d+1);
    char f = f1 + f2;
    //if (n > 15)
    //    std::cout << n << string(d, ' ') << f1 << "+" << f2 << "=" << f << "\n";
    return f;
}

int main()
{
    int n;
    std::cin >> n;
    int f = fib(n, 1);
    std::cout << f << "\n";
}

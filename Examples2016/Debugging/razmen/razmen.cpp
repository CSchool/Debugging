#include<iostream>
#include<vector>
using namespace std;

int N(int n)
{
    if (n < 5)
        return 1;
    else
        return 1 + N(n - 5);
}

int D(int n)
{
    if (n < 10)
        return N(n);
    else
        return N(n) + D(n - 10);
}

int Q(int n)
{
    if (n < 25)
        return D(n);
    else
        return D(n) + Q(n - 25);
}

int C(int n)
{
    if (n < 50)
        return Q(n);
    else
        return Q(n) + C(n - 50);
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << 0 << endl;
    else
        cout << C(n) << endl;
}

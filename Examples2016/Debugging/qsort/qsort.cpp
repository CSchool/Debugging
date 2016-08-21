/*
 ���������� �������
 �� ������� ������
 4
 3 1 3 5
 ������� ������������ ��������
*/

#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>


int partition(int* a, int len) {
    int r = len;
    int l = 1;

    while (l < r) {
        if (a[l] > a[0]) {
            std::swap(a[l], a[--r]);
        } else {
            ++l;
        }
    }

    std::swap(a[0], a[l - 1]);
    return l - 1;
} 

//    print(__LINE__, a, len);
void print(int line, int *a, int len)
{
    std::cout << "L" << line << " ";
    for (int i = 0 ; i < len ; ++i)
        std::cout << a[i] << " ";
    std::cout << "\n";
}


void qsort(int* a, int len) {
    if (len <= 1) {
        return;
    } else if (len == 2) {
        if (a[0] > a[1]) {
            std::swap(a[0], a[1]);
        }
    } else {
        int i = rand() % len;
        std::swap(a[0], a[i]);
        int t = partition(a, len);
        qsort(a, t);
        qsort(a + t + 1, len - t - 1);        
    }
}

int main() {
    int n;
    std::cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    qsort(a, n);
    bool f = false;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            f = true;
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << ' ';
    }

    std::cout << (f ? "NO" : "YES") << "\n";
}

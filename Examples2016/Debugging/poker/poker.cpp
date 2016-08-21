/*
ƒаны 5 целых чисел. —реди них:
если одинаковы 5, то вывести "Impossible", иначе
если одинаковы 4, то вывести "Four of a Kind", иначе
если одинаковы 3 и 2, то вывести "Full House", иначе
если есть 5 последовательных, то вывести "Straight", иначе
если одинаковы 3, то вывести "Three of a Kind", иначе
если одинаковы 2 и 2, то вывести "Two Pairs", иначе
если одинаковы 2, то вывести "One Pair", иначе
вывести "Nothing".

¬вод
¬ первой строке наход€тс€ 5 чисел через пробел.
¬ывод
¬ыводитс€ одна строка - результат анализа.
ќграничени€
¬се числа от 1 до 13 включительно.
*/
#include<iostream>
using namespace std;

int main()
{
    int a[6];
    int n=5,kp,kt,k;
    k=0;
    kp=0;
    kt=0;
    for(int i=1; i<=n; ++i)
        cin >> a[i];

    for(int i=1; i<n; ++i)
        for(int j=1; j<=n-i; ++j)
            if(a[j] > a[j+1])
            {
                int c;
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }

    for(int i=1; i<=n; ++i)
    {
        if(a[i]==a[i+1]) ++k;
        if((k==1)&&(a[i+1]!=a[i+2]))
        {
            ++kp;
            k=0;
        }
        else if((k==2)&&(a[i+1]!=a[i+2]))
        {
            ++kt;
            k=0;
        }
    }
    if((kp==1)&&(kt==0))
        cout<<"One Pair";
    else if((kp==2)&&(kt==0))
        cout<<"Two Pairs";
    else if((kp==0)&&(kt==1))
        cout<<"Three of a Kind";
    else if((kp==1)&&(kt==1))
        cout<<"Full House";
    else if((kp==0)&&(kt==0)&&(k==3))
        cout<<"Four of a Kind";
    else if((kp==0)&&(kt==0)&&(k==4))
        cout<<"Impossible";
    else if((kp==0)&&(kt==0)&&(k==0))
    {
        for(int i=1; i<=n; ++i)
            if(a[i]==a[i+1]-1)++k;
        if (k==4)
            cout<<"Straight";
        else cout<<"Nothing";
    }

    return 0;
}

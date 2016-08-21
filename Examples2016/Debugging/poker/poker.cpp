/*
���� 5 ����� �����. ����� ���:
���� ��������� 5, �� ������� "Impossible", �����
���� ��������� 4, �� ������� "Four of a Kind", �����
���� ��������� 3 � 2, �� ������� "Full House", �����
���� ���� 5 ����������������, �� ������� "Straight", �����
���� ��������� 3, �� ������� "Three of a Kind", �����
���� ��������� 2 � 2, �� ������� "Two Pairs", �����
���� ��������� 2, �� ������� "One Pair", �����
������� "Nothing".

����
� ������ ������ ��������� 5 ����� ����� ������.
�����
��������� ���� ������ - ��������� �������.
�����������
��� ����� �� 1 �� 13 ������������.
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

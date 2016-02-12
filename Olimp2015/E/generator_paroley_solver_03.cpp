#include <stdio.h>
#include <string.h>

int main()
{
    char buf[256];
    char pass[256];

    gets(buf);
    int sum1 = 0;
    int i = 0;

    for (char *p = buf ; *p ; ++p, i++)
    {
        if (i % 5 == 0)
            sum1 += (*p - '0');
    }

    int sum2 = 0;
    while ((sum1 * sum2) % 21 != 9)
        ++sum2;

    while (sum2)
    {
        for (int c = 127 ; c >= '0' ; --c)
        {
           int d = (c - '0') * (c - '0') * (c - '0');
           if (sum2 >= d)
           {
              sum2 -= d;
              printf("%c", c);
              break;
           }
        }
    }

    return 0;
}

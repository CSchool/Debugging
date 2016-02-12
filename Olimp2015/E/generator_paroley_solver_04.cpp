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

    int sum2 = 1;
    while ((sum1 + sum2) % 21 != 9)
        ++sum2;

    while (sum2--)
        printf("1");

    return 0;
}

#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
 
bool is_valid(char a[4], int size, char c)
{
    int no = size;
    for (int i = 0 ; i < size ; i++)
        if (a[i] != c)
            no--;
    if (!no)
        a[size] = c;
    return !no;
}
int main(int argc, char* argv[])
{
    char my[4];
    int b, k, digits = 0;
    char numbers[11] = "0123456789";
    srand((unsigned)time(NULL));
    while (digits < 4)
        if (is_valid(my, digits, numbers[rand() % 10]))
            digits++;
    //printf("my number is %c%c%c%c\n",my[0],my[1],my[2],my[3]);
    char enter[4], c(' ');
    b = k = digits = 0;
    printf("Enter four digits or q for quit\n");
    while (c != 'q' && c != 'Q')
    {
        if (isdigit(c = _getch()))
        {
            if (is_valid(enter, digits, c))
            {
                printf("%c", c);
                for (int i = 0 ; i < 4 ; i++)
                    if (my[i] == c)
                        if (i == digits)
                            b++;
                        else
                            k++;
                digits++;
                if (digits == 4)
                {
                    printf("\t\tb=%d k=%d\n", b, k);
                    if (b == 4)
                    {
                        printf("U WON!");
                        break;
                    }
                    b = k = digits = 0;
                }
            }
        }
    }
    printf("\npress any key\n");
    _getch();
    return 0;
}

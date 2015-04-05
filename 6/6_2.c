#include <stdio.h>

int main(void)
{
    char cDollar = '$';
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%c", cDollar);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#define STOP '#'

int main(void)
{
    char chInput;
    int i = 0;
    printf("Input something: ");

    while ((chInput = getchar()) != STOP)
    {
        if (i == 8)
        {
            i = 0;
            printf("\n");
        }

        printf("%c: %d |  ", chInput, chInput);
        i++;
    }

    return 0;
}
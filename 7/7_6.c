#include <stdio.h>
#define STOP '#'

int main(void)
{
    char chInput, chPre;
    int nei = 0;

    printf("Input some characters(# to quit): ");

    while ((chInput = getchar()) != '#')
    {
        if (chInput == 'e') {
            chPre = 'e';
        } else if (chInput == 'i' && chPre == 'e') {
            nei++;
        }
    }

    printf("Total %d 'ei'", nei);

    return 0;
}

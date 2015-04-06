#include <stdio.h>
#define STOP '#'

int main(void)
{
    char chInput;
    int nReplace = 0;
    printf("Input some characters: ");
    while ((chInput = getchar()) != STOP)
    {
        if (chInput == '.') {
            chInput = '!';
            nReplace++;
        } else if (chInput == '!') {
            chInput = '!!';
            nReplace++;
        }
    }

    printf("Total %d replacement has been done.", nReplace);

    return 0;
}
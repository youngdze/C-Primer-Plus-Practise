#include <stdio.h>
#include <ctype.h>
#define STOP '#'

int main(void)
{
    char chInput;
    int nSpace, nNewLine, nGraphic;
    printf("Input something: ");

    while ((chInput = getchar()) != STOP)
    {
        if (chInput == ' ')
            nSpace++;
        else if (chInput == '\n')
            nNewLine++;
        else
            nGraphic++;
    }

    printf("Graphics: %d Spaces: %d nNewLine: %d", nGraphic, nSpace, nNewLine);

    return 0;
}
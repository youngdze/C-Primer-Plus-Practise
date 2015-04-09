#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char chInput, chPrev;
    float fWords, fLetters, fAverage;
    printf("Enter some characters: ");
    while ((chInput = getchar()) != EOF)
    {
        if (isalpha(chInput)) {
            fLetters++;
            chPrev = chInput;
        } else if (isalpha(chPrev) && isspace(chInput)) {
            fWords++;
        }
    }

    fAverage = fLetters / fWords;

    printf("Every word contains %g letters in avarage", fAverage);

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char chInput;
    int nLower, nUpper;
    printf("Enter some characters: \n");
    while ((chInput = getchar()) != EOF)
    {
        if (islower(chInput)) {
            nLower++;
        } else if (isupper(chInput)) {
            nUpper++;
        }
    }

    printf("Totally %d lowercase letters and %d uppercase letters.", nLower, nUpper);

    return 0;
}
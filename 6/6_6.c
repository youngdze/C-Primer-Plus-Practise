#include <stdio.h>
#include <string.h>

void op(char[], int);

int main(void)
{
    char chInput[255];
    printf("Input a string: ");
    scanf("%s", chInput);
    int nSize = strlen(chInput);
    op(chInput, nSize);

    return 0;
}

void op(char chInput[], int nSize)
{
    int i;
    for (i = nSize - 1; i >= 0; i--)
    {
        printf("%c", chInput[i]);
    }
}
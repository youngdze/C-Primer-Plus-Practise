#include <stdio.h>
#include <string.h>

int main(void)
{
    char strInput[255];
    int nSize;
    printf("Enter a line: ");

    int i = 0;
    while (scanf("%c", &strInput[i]) == 1 && strInput[i] != '\n')
    {
        i++;
    }

    nSize = strlen(strInput);

    for (i = (nSize - 1); i >= 0; i--)
    {
        printf("%c", strInput[i]);
    }

    return 0;
}

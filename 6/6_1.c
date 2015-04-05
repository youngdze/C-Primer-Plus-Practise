#include <stdio.h>
#define a 97
#define z 122

int main(void)
{
    char cCharater[40];
    int nCharacter, i;
    for (nCharacter = a, i = 0; nCharacter <= z; nCharacter++, i++)
    {
        cCharater[i] = nCharacter;
    }

    int j;
    for (j = 0; j < 26; j++)
    {
        printf("%c ", cCharater[j]);
    }


    return 0;
}
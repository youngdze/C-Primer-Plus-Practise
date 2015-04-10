#include <stdio.h>
#include <ctype.h>
int ChLoca(char);

int main(void)
{
    char chX;
    printf("Enter some characters: \n");
    while ((chX = getchar()) != EOF)
    {
        if (ChLoca(chX) != -1)
        {
            printf("%c: %d ", chX, ChLoca(chX));
        }
    }

    return 0;
}

int ChLoca(char chX)
{
    if (isalpha(chX))
    {
        chX = tolower(chX);
        return chX - 96;
    } else {
        return -1;
    }
}
#include <stdio.h>
void chline (char, int, int);

int main(void)
{
    char chInput;
    int nStart, nEnd;
    printf("Enter a character and two lines: \n");
    scanf("%c%d%d", &chInput, &nStart, &nEnd);
    chline(chInput, nStart, nEnd);

    return 0;
}

void chline (char ch, int nCols, int nRows)
{
    int i, j;

    for (i = 0; i < nRows; i++)
    {
        for (j = 0; j < nCols; j++)
            printf("%c", ch);
        printf("\n");
    }
}
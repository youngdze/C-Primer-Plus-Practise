#include <stdio.h>
void chline (char, int, int);

int main(void)
{
    char chInput;
    int nStart, nEnd;
    printf("Enter the character and two lines: \n");
    scanf("%c%d%d", &chInput, &nStart, &nEnd);
    chline(chInput, nStart, nEnd);

    return 0;
}

void chline (char ch, int nStart, int nEnd)
{
    int i;
    for (i = 1; i < nStart; i++)
        printf(" ");

    for (i = nStart; i <= nEnd; i++)
        printf("%c", ch);
}
#include <stdio.h>

int main(void)
{
    int arrInput[8];
    printf("Enter 8 integers: ");

    int i;
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arrInput[i]);
    }

    for (i = 7; i >= 0; i--)
    {
        printf("%d ", arrInput[i]);
    }

    return 0;
}
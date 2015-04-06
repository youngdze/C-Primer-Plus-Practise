#include <stdio.h>

int main(void)
{
    double fA[8], fB[8], fSum;
    printf("Enter a double array: ");
    int i;
    for (i = 0; i < 8; i++)
    {
        scanf("%lf", &fA[i]);
        fSum += fA[i];
        fB[i] = fSum;
        printf("%4g", fA[i]);
    }

    printf("\n");

    for (i = 0; i < 8; i++)
    {
        printf("%4g", fB[i]);
    }

    return 0;
}
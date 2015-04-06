#include <stdio.h>
#include <math.h>

int cacul(int, int);

int main(void)
{
    int nLower, nUpper;
    printf("Enter lower and upper integer limits: ");
    ;
    while (scanf("%d%d", &nLower, &nUpper) == 2 && nLower < nUpper)
    {
        printf("The sums of the squares from %g to %g is %d\n", pow(nLower, 2), pow(nUpper, 2), cacul(nLower, nUpper));
        printf("Enter lower and upper integer limits: ");
    }

    return 0;
}

int cacul(int nLower, int nUpper)
{
    int nSum;
    int i;
    for (i = nLower; i < nUpper + 1; i++)
    {
        nSum += pow(i, 2);
    }
    return nSum;
}
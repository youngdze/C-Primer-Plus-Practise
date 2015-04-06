#include <stdio.h>
#define STOP 0

int main(void)
{
    int nInput;
    double nEven = 0, nOdd = 0, nEvenSum = 0, nOddSum = 0;
    printf("Input integers: ");

    while (scanf("%d", &nInput) == 1 && nInput != STOP)
    {
        if (nInput % 2 == 0)
        {
            nEvenSum += nInput;
            nEven++;
        }
        else
        {
            nOddSum += nInput;
            nOdd++;
        }

    }

    if (nEven == 0 && nOdd != 0)
        printf("Even: 0\nOdd: %g, Average: %g", nOdd, nOddSum / nOdd);
    else if (nOdd == 0 && nEven != 0)
        printf("Even: %g, Average: %g\nOdd: 0", nEven, nEvenSum / nEven);
    else if (nEven == 0 && nOdd == 0)
        printf("Nothing");
    else
        printf("Even: %g, Average: %g\nOdd: %g, Average: %g", nEven, nEvenSum / nEven, nOdd, nOddSum / nOdd);

    return 0;
}
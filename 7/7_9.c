#include <stdio.h>
#include <stdbool.h>
bool IsPrime(int);


int main(void)
{
    int nInput;
    printf("Input an integer(q to quit): ");

    while (scanf("%d", &nInput) == 1 && nInput >= 2)
    {
        int i;
        for (i = 2; i <= nInput; i++)
        {
            if (IsPrime(i))
                printf("%d ", i);
        }

        printf("Input an integer(q to quit): ");
    }

    return 0;
}

bool IsPrime(int nIn)
{
    bool isPrime = true;

    if (nIn < 2)
        isPrime = false;

    int i;
    for (i = 2; i < nIn; i++)
    {
        if (nIn % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}
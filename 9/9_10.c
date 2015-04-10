#include <stdio.h>
long Fibonacci (int n);

int main(void)
{
    int n;
    printf("Enter fibonacci limit(none-number to quit): \n");
    while (scanf("%d", &n) == 1)
    {
        printf("The result is %d\n", Fibonacci(n));
        printf("Enter fibonacci limit(none-number to quit): \n");
    }

    return 0;
}

long Fibonacci (int n)
{
    int i, nPre1 = 1, nPre2 = 1, nCurrent;
    if (n > 2) {
        for (i = 2; i < n; i++) {
            nCurrent = nPre1 + nPre2;
            nPre2 = nPre1;
            nPre1 = nCurrent;
        }
    } else {
        nCurrent = 1;
    }
    return nCurrent;

}
#include <stdio.h>
#include <math.h>
struct Tuple Cacul(int);

struct Tuple
{
    double fUp;
    double fDown;
};

int main(void)
{
    int nLimit;
    printf("Enter a limit integer: ");
    while (scanf("%d", &nLimit) == 1)
    {
        printf("Up: %g Down: %g\n", Cacul(nLimit).fUp, Cacul(nLimit).fDown);
        printf("Enter a limit integer: ");
    }

    return 0;
}

struct Tuple Cacul(int nLimit)
{
    double fUp = 0, fDown = 0;
    double i;
    for (i = 1; i <= nLimit; i++)
    {
        fUp = fUp + 1.0 / i;
        fDown = fDown + (1.0 / i) * pow(-1, i) * (-1);
    }

    struct Tuple r = {fUp, fDown};
    return r;
}
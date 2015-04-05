#include <stdio.h>
#include <math.h>

int main(void)
{
    double lower, upper;
    printf("Input the lower limit and the upper limit: ");
    scanf("%lf%lf", &lower, &upper);
    lower = ceil(lower);
    upper = ceil(upper);
    double i;
    for (i = lower; i < upper; i++)
    {
        printf("%g %g %g\n", i, pow(i, 2), pow(i, 3));
    }

    return 0;
}

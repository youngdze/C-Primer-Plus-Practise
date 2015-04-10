#include <stdio.h>
double min (double, double);

int main(void)
{
    double fX, fY;
    printf("Enter two number: \n");
    scanf("%lf%lf", &fX, &fY);
    printf("The lower one is %g", min(fX, fY));

    return 0;
}

double min (double fX, double fY)
{
    if (fX > fY)
        return fY;
    else
        return fX;
}
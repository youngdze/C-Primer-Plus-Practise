#include <stdio.h>
double Harmonic (double, double);

int main(void)
{
    double fX, fY;
    printf("Enter two number: \n");
    scanf("%lf%lf", &fX, &fY);
    printf("The harmonic of %lf and %lf is %lf.", fX, fY, Harmonic(fX, fY));

    return 0;
}

double Harmonic (double fX, double fY)
{
    return 1 / (( 1 / fX + 1 / fY) / 2);
}
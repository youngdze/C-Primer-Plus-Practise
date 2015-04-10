#include <stdio.h>
double larger_of(double *, double *);

int main(void)
{
    double fX, fY;
    printf("Enter two number: \n");
    scanf("%lf%lf", &fX, &fY);
    printf("The larger one is %g", larger_of(&fX, &fY));
    return 0;
}

double larger_of(double *fX, double *fY)
{
    if (*fX > *fY)
        *fY = *fX;
    else
        *fX = *fY;
    return *fX;
}
#include <stdio.h>
double cacul(double, double);

int main(void)
{
    double fA, fB;
    printf("Input two double value: ");
    while (scanf("%lf%lf", &fA, &fB) == 2) {
        printf("%g\n", cacul(fA, fB));
        printf("Input two double value: ");
    }

    return 0;
}

double cacul(double fA, double fB)
{
    return (fA - fB) / (fA * fB);
}
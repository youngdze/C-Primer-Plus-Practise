#include <stdio.h>
struct Tuple Temperatures(double);

struct Tuple
{
    double Celsius;
    double Kelvin;
};

int main(void)
{
    double fFeh;
    printf("Input temperature based on fahrenheit: ");
    scanf("%lf", &fFeh);
    printf("%.2lfF is %.2lfC, %.lfK", fFeh, Temperatures(fFeh).Celsius, Temperatures(fFeh).Kelvin);
}

struct Tuple Temperatures(double fFah)
{
    const char celUnit[2] = "°C";
    const char kevUnit = "K";

    double celsius = fFah * 1.8 + 32.0;
    double kelvin = celsius + 273.16;

    struct Tuple r = {celsius, kelvin};
    return r;
}
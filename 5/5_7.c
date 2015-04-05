#include <stdio.h>
float cube(float);

int main(void)
{
    float fN;
    printf("Input a number: ");
    scanf("%f", &fN);
    printf("The cube of %.5f is %.5f", fN, cube(fN));
}

float cube(float fN)
{
    return fN * fN * fN;
}
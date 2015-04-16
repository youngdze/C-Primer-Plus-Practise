#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double base = atof(argv[1]);
    int index = atoi(argv[2]);
    printf("%g ^ %d is %g", base, index, pow(base, index));
}
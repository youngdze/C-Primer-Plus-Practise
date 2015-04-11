#include <stdio.h>
#define SIZE 5
void copy_arr_p (const double *, double *, int);
void copy_arr_arr (const double source[], double target[], int nSize);

int main(void)
{
    const double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE], target2[SIZE];
    copy_arr_p(&source, &target1, SIZE);
    copy_arr_arr(source, target2, SIZE);
    
    return 0;
}

void copy_arr_p (const double * pdSource, double * pdTarget, int nSize)
{
    int i;
    for (i = 0; i < nSize; i++)
        *(pdTarget + i) = *(pdSource + i);
}

void copy_arr_arr (const double source[], double target[], int nSize)
{
    int i;
    for (i = 0; i < nSize; i++)
        target[i] = source[i];
}
#include <stdio.h>
#define SIZE 7
int Max(const int *, int);

int main(void)
{
    int anArr[7] = {1, 2, 3, 4, 5, 8, 10};
    printf("The largest one is %d", Max(anArr, SIZE));

    return 0;
}

int Max(const int * pnArr, int nSize)
{
    int nMax = *pnArr, i;
    for (i = 0; i < nSize; i++)
    {
        if (*(pnArr + i) > nMax)
        {
            nMax = *(pnArr + i);
        }
    }
    return nMax;
}
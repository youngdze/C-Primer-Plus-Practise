#include <stdio.h>
#define SIZE 7
int SubtractBetweenMaxAndMin(const int *, int);

int main(void)
{
    int anArr[7] = {1, 2, 3, 4, 5, 8, 10};
    printf("The subtract of max and min is %d", SubtractBetweenMaxAndMin(&anArr, SIZE));

    return 0;
}

int SubtractBetweenMaxAndMin(const int * pnArr, int nSize)
{
    int nMax, nMin, i;
    nMax = nMin = *pnArr;
    for (i = 0; i < nSize; i++)
    {
        if (*(pnArr + i) > nMax)
        {
            nMax = *(pnArr + i);
        }
        else if (*(pnArr + i) < nMin)
        {
            nMin = *(pnArr + i);
        }
    }
    return nMax - nMin;
}
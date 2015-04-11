#include <stdio.h>
#define SIZE 7
int MaxIndex(const int *, int);

int main(void)
{
    int anArr[7] = {1, 2, 3, 4, 5, 8, 10};
    printf("The index of the largest one is %d", MaxIndex(&anArr, SIZE));

    return 0;
}

int MaxIndex(const int * pnArr, int nSize)
{
    int nMax = *pnArr, nMaxIndex = 0, i;
    for (i = 0; i < nSize; i++)
    {
        if (*(pnArr + i) > nMax)
        {
            nMax = *(pnArr + i);
            nMaxIndex = i;
        }
    }
    return nMaxIndex;
}
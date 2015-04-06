#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[8];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        arr[i] = pow(2, i + 1);
    }

    j = 0;
    do
    {
        printf("%d ", arr[j]);
        j++;
    }
    while (j < 8);

    return 0;
}
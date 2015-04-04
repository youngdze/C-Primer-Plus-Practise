#include <stdio.h>

int main(void)
{
    int nStart, nEnd;
    printf("Input an integer: ");
    scanf("%d", &nStart);
    nEnd     = nStart + 10;
    while (nStart++ < nEnd)
    {
        printf("%d ", nStart);
    }

    return 0;
}


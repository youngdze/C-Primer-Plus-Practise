#include <stdio.h>

int main(void)
{
    float fBasic = 1000000;
    float fRate = 0.08;
    float fSum = fBasic;

    int nYear = 0;
    while (fSum > 0)
    {
        fSum = fSum * (1 + fRate) - 100000;
        nYear++;
    }

    printf("Lucky can empty his account after %d years.", nYear);

    return 0;
}

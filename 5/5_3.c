#include <stdio.h>

#define DAYSPERWEEK 7

int main(void)
{
    int nInput, week, day;
    printf("Input days: ");
    while (scanf("%d", &nInput) == 1 && nInput > 0) // if integer
    {
        week = nInput / DAYSPERWEEK;
        day = nInput % DAYSPERWEEK;
        printf("%d days are %d weeks, %d days\n", nInput, week, day);
        printf("Input days: ");
    }

    return 0;
}

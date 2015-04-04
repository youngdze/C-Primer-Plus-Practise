#include <stdio.h>
#define MPERH 60

int main(void)
{
    int input, hr, min;
    printf("Input minutes: ");
    while (scanf("%d", &input) == 1 && input > 0)
    {
        hr = input / MPERH;
        min = input % MPERH;
        printf("%d h %d m\n", hr, min);
        printf("Input minutes: ");
    }

    return 0;
}


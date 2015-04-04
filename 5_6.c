#include <stdio.h>

int main(void)
{
    float nDay, nTotal, nPay = 1;
    printf("How many day will you work: ");
    scanf("%f", &nDay);
    while (nDay > 0)
    {
        nTotal += nPay * nPay;
        nPay++;
        nDay--;
    }
    printf("You can earn $%.2f", nTotal);
    return 0;
}
#include <stdio.h>
#define PAYPERHR 10
#define OVERTIME 40
#define OVERTIMERATE 1.5
#define TAXLTTH 0.15
#define TAXNEXTOPF 0.2
#define TAXOVERFF 0.25

int main(void)
{
    int nHr;
    float fWage, fNetWage, fTax;
    printf("How many hours have you work for last week: ");
    scanf("%d", &nHr);

    if (nHr > OVERTIME)
    {
        nHr = OVERTIME + (nHr - OVERTIME) * OVERTIMERATE;
    }

    fWage = nHr * PAYPERHR;

    if (fWage > (300 + 150)) {
        fTax = 300 * TAXLTTH + 150 * TAXNEXTOPF + (fWage - 300 - 150) * TAXOVERFF;
    } else if (fWage > 300) {
        fTax = 300 * TAXLTTH + (fWage - 300) * TAXNEXTOPF;
    } else {
        fTax = fWage * TAXLTTH;
    }

    fNetWage = fWage - fTax;
    
    printf("Your total wage: %g\nYour tax: %g\nYour net wages: %g", fWage, fTax, fNetWage);

    return 0;
}
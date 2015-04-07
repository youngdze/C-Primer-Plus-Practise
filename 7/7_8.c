#include <stdio.h>
#define OVERTIME 40
#define OVERTIMERATE 1.5
#define TAXLTTH 0.15
#define TAXNEXTOPF 0.2
#define TAXOVERFF 0.25
float SetPay(int);

int main(void)
{
    int nHr, nOption;
    float fPayPerHr;
    float fWage, fNetWage, fTax;

    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr    2)$9.33/hr\n3)$10.00/hr    4)$11.20/hr\n5)quit\n");
    scanf("%d", &nOption);

    if (SetPay(nOption)) {
        fPayPerHr = SetPay(nOption);
    } else {
        return 0;
    }


    printf("How many hours have you work for last week: ");
    scanf("%d", &nHr);

    if (nHr > OVERTIME)
    {
        nHr = OVERTIME + (nHr - OVERTIME) * OVERTIMERATE;
    }

    fWage = nHr * fPayPerHr;

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

float SetPay(int nOption)
{
    switch (nOption) {
        case 1:
            return 8.75;
        case 2:
            return 9.33;
        case 3:
            return 10.00;
        case 4:
            return 11.2;
        case 5:
            return 0;
        default:
            printf("Illegal option, choose again.\n");
            printf("Enter the number corresponding to the desired pay rate or action:\n");
            printf("1) $8.75/hr    2)$9.33/hr\n3)$10.00/hr    4)$11.20/hr\n5)quit\n");
            scanf("%d", &nOption);
            SetPay(nOption);
            break;
    }
}
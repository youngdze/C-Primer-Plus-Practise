#include <stdio.h>
#define OVERTIME 40
#define OVERTIMERATE 1.5
#define TAXLTTH 0.15
#define TAXNEXTOPF 0.2
#define TAXOVERFF 0.25
float SetPay();

int main(void)
{
    int nHr, nOption;
    float fPayPerHr;
    float fWage, fNetWage, fTax;

    if (!(fPayPerHr = SetPay())) {
        printf("Goodbye!");
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

float SetPay()
{
    char chOption;
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr    b)$9.33/hr\nc)$10.00/hr    d)$11.20/hr\nq)quit\n");

    while ((chOption = getchar()) != '\n' && chOption != 'q') {
        switch (chOption) {
            case 'a':
                return 8.75;
            case 'b':
                return 9.33;
            case 'c':
                return 10.00;
            case 'd':
                return 11.2;
            default:
                printf("Illegal option, choose again.\n");
                break;
        }
        while (getchar() != '\n')
            continue;
    }
}
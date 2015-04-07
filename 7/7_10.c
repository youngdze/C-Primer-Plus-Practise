#include <stdio.h>
#define SINGLETAXLIMIT 17850
#define HOSTTAXLIMIT 23900
#define MARRIEDTAXLIMIT 29750
#define DIVORCETAXLIMIT 14875
#define BASICRATE 0.15
#define OVERPARTRATE 0.28
float CalTax(int);

int main(void)
{
    int nOption;
    float fTax;

    printf("What's your marital status: \n");
    printf("1)Single    2)Host    \n3)Married    4)Divorce\n5)quit\n");

    while (scanf("%d", &nOption) == 1)
    {
        switch (nOption) {
            case 1:
                CalTax(SINGLETAXLIMIT);
                break;
            case 2:
                CalTax(HOSTTAXLIMIT);
                break;
                break;
            case 3:
                CalTax(MARRIEDTAXLIMIT);
                break;
            case 4:
                CalTax(DIVORCETAXLIMIT);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid option, choose again. \n");
                printf("What's your marital status: \n");
                printf("1)Single    2)Host    \n3)Married    4)Divorce\n5)quit\n");
                break;
        }

        printf("What's your marital status: \n");
        printf("1)Single    2)Host    \n3)Married    4)Divorce\n5)quit\n");
    }

    printf("Goodbye.");


    return 0;
}

float CalTax(int nLimit)
{
    float fRevenue, fTax;

    printf("Enter your revenue: ");
    scanf("%f", &fRevenue);
    if (fRevenue <= nLimit) {
        fTax = fRevenue * nLimit;
    } else {
        fTax = nLimit * BASICRATE + (fRevenue - nLimit) * OVERPARTRATE;
    }

    printf("Your tax is %g\n", fTax);
    return fTax;

}
#include <stdio.h>

int main(void)
{
    float fBasicOfDaphne = 100, fBasicOfDeirdre = 100;
    float fRateOfDaphne = 0.1, fRateOfDeirdre = 0.05;
    float fSumOfDaphne = fBasicOfDaphne, fSumOfDeirdre = fBasicOfDeirdre;

    int nYear = 0;
    while (fSumOfDaphne >= fSumOfDeirdre)
    {
        fSumOfDaphne = fSumOfDaphne + fBasicOfDaphne * fRateOfDaphne;
        fSumOfDeirdre = fSumOfDeirdre + fSumOfDaphne * fRateOfDeirdre;
        nYear++;
    }

    printf("Deirdre's investment will exceed Daphne's after %d years.", nYear);


    return 0;
}

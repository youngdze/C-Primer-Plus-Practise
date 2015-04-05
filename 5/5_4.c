#include <stdio.h>

int main(void)
{
    float fCm, fFeet, fInch;
    printf("Enter a height in centimeters: ");
    
    while (scanf("%f", &fCm) == 1 && fCm > 0)
    {
        fInch = fCm / 30.5;
        fFeet = fInch / 12;    
        printf("%.1f cm = %1f feet, %.2f inches\n", fCm, fFeet, fInch);
        printf("Enter a height in centimeters: ");
    }

    return 0;
}

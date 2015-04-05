#include <stdio.h>
#define A 65
void sort(char);

int main(void)
{
    char chInput;
    printf("Input an uppercase character: ");
    scanf("%c", &chInput);
    sort(chInput);

    return 0;
}

void sort(char chInput)
{
    int nInterval = chInput - A;
    int i, j, h, u, z;

    for (i = 0; i < (nInterval + 1); i++)
    {
        // print the previous space
        for (j = nInterval; j > i; j--)
            printf(" ");

        // print the previous characters
        for (h = 0; h < (i + 1); h++)
            printf("%c", A + h);

        // print the back characters
        for (u = i; u > 0; u--)
            printf("%c", A + u - 1);

        // print the back space
        for (z = nInterval; z > i; z--)
            printf(" ");

        printf("\n");

    }
}
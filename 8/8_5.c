#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int nSide1 = 0, nSide2 = 100;
    char chCmp;
    printf("Your number should between 0 and 100. ");
    printf("'l' means less, 'g' means greater, 'e' means equal.\n");
    printf("Is it %d?\n", (nSide1 + nSide2) / 2);

    while ((chCmp = getchar()) != '\n' && tolower(chCmp) != 'e')
    {
        if (chCmp == 'l') {
            nSide2 = (nSide1 + nSide2) / 2;
            printf("Is it %d?\n", (nSide1 + nSide2) / 2);
        } else if (chCmp == 'g') {
            nSide1 = (nSide1 + nSide2) / 2;
            printf("Is it %d?\n", (nSide1 + nSide2) / 2);
        } else {
            printf("I don't understand your instruction, please enter again.\n");
            printf("'l' means less, 'g' means greater, 'e' means equal.\n");
            printf("Is it %d?\n", (nSide1 + nSide2) / 2);
        }
        while (getchar() != '\n')
            continue;
    }

    printf("I knew I can do it! Goodbye!");

    return 0;
}

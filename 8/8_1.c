#include <stdio.h>

int main(void)
{
    int nCount;
    
    printf("Enter some characters: \n");
    while (getchar() != EOF)
        nCount++;

    printf("\nYou totally enter %d characters.", nCount);

    return 0;
}
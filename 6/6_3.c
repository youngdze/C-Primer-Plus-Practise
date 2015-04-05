#include <stdio.h>
#define A 65
#define F 70

int main(void)
{
    int i, j, z;
    for (i = 0; i < 6; i++)
    {
        for (j = i, z = F; j >= 0; j--, z--)
        {
            printf("%c", z);
        }
        printf("\n");
    }

    return 0;
}
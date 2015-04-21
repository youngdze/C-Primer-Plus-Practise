#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sets = 0, sides = 0, dice = 0;
    time_t seed = time(NULL);
    srand((unsigned) seed);

    printf("Enter the number of sets: enter q to stop.\n");
    while (scanf("%d", &sets) == 1)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d%d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        int i, j;
        for (i = 0; i < sets; i++)
        {
            int sum = 0;
            for (j = 0; j < dice; j++)
            {
                sum += rand() % 6 + 1;
            }
            printf("%d ", sum);
        }

        putchar('\n');
        printf("How many sets? Enter q to stop.\n");
    }
}
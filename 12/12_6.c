#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

int main()
{
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
    time_t seed = time(NULL);
    srand((unsigned) seed);

    int i;
    for (i = 0; i < SIZE; i++)
    {
        switch (rand() % 10 + 1)
        {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            case 8:
                eight++;
                break;
            case 9:
                nine++;
                break;
            default:
                ten++;
        }
    }

    printf("One: %d\nTwo: %d\nThree: %d\nFour: %d\nFive: %d\nSix: %d\nSeven: %d\nEight: %d\nNine: %d\nTen: %d\n", one, two, three, four, five, six, seven, eight, nine, ten);
}
#include <stdio.h>
#define ROWS 2
#define COLS 3

int main(void)
{
    int arr[ROWS][COLS] = {
            {1, 2, 3},
            {3, 4, 5}
    };
    int temp[ROWS][COLS];

    copy_arr(arr, temp, COLS);

    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", temp[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

void copy_arr(int (*arr)[COLS], int (*copy)[COLS], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            copy[i][j] = arr[i][j];
        }
    }
}
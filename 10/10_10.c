#include <stdio.h>
void double_r(int rs, int cs, const double source[rs][cs], double target[rs][cs]);
void print_r(int rs, int cs, const double arr[rs][cs]);

int main(void)
{
    double arr[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };

    double arr_double[3][5];
    double_r(3, 5, arr, arr_double);
    print_r(3, 5, arr_double);

    return 0;
}

void double_r(int rs, int cs, const double source[rs][cs], double target[rs][cs])
{
    int i, j;
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            target[i][j] = source[i][j] * 2;
}

void print_r(int rs, int cs, const double arr[rs][cs])
{
    int i, j;
    for (i = 0; i < rs; i++) {
        for (j = 0; j < cs; j++)
            printf("%g ", arr[i][j]);
        putchar('\n');
    }
}
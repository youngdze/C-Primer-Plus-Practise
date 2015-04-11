#include <stdio.h>
void copy(int rs, int cs, double source[rs][cs], double target[rs][cs]);
void print_r(int rs, int cs, double arr[rs][cs]);

int main(void)
{
    double arr[3][5] = {
            {1, 2, 3, 4, 5},
            {2, 3, 4, 5, 6},
            {3, 4, 5, 6, 7}
    };
    double arr_copy[3][5];
    copy(3, 5, arr, arr_copy);
    print_r(3, 5, arr);
    print_r(3, 5, arr_copy);

    return 0;
}

void copy(int rs, int cs, double source[rs][cs], double target[rs][cs])
{
    int i, j;
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            target[i][j] = source[i][j];
}

void print_r(int rs, int cs, double arr[rs][cs])
{
    int i, j;
    for (i = 0; i < rs; i++) {
        for (j = 0; j < cs; j++)
            printf("%g ", arr[i][j]);
        putchar('\n');
    }
}
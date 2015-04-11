#include <stdio.h>
void save(int rs, int cs, double arr[rs][cs]);
double average_collection(int r, int cs, double arr[r][cs]);
double average(int rs, int cs, double arr[rs][cs]);
double max(int rs, int cs, double arr[rs][cs]);
void print_r(int rs, int cs, double arr[rs][cs]);

int main(void)
{
    double arr[3][5];
    save(3, 5, arr);
    printf("The average of the first collection is %g\n", average_collection(0, 5, arr));
    printf("The average of the second collection is %g\n", average_collection(1, 5, arr));
    printf("The average of the third collection is %g\n", average_collection(2, 5, arr));
    printf("The average of all is %g\n", average(3, 5, arr));
    printf("The largest of all is %g\n", max(3, 5, arr));
    print_r(3, 5, arr);

    return 0;
}

void save(int rs, int cs, double arr[rs][cs])
{
    int i, j;
    for (i = 0; i < rs; i++)
    {
        printf("Enter %d double number: \n", cs);
        for (j = 0; j < cs; j++)
            scanf("%lf", &arr[i][j]);
    }
}

double average_collection(int r, int cs, double arr[r][cs])
{
    double sum;
    int i;
    for (i = 0; i < cs; i++)
        sum += arr[r][i];
    return sum / cs;
}

double average(int rs, int cs, double arr[rs][cs])
{
    int i, j;
    double sum;
    for (i = 0; i < rs; i++)
    {
        for (j = 0; j < cs; j++)
            sum += arr[i][j];
    }

    return sum / (rs * cs);
}

double max(int rs, int cs, double arr[rs][cs])
{
    int i, j;
    double max;
    for (i = 0; i < rs; i++)
    {
        for (j = 0; j < cs; j++)
        {
            if (i == 0 && j == 0)
                max = arr[i][j];
            else if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    return max;
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
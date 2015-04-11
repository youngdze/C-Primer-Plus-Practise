#include <stdio.h>
#define SIZE 4
void add_ar(int rs, double source1[rs], double source2[rs], double target[rs]);
void print_r(int rs, double arr[rs]);

int main(void)
{
    double source1[SIZE] = {2, 4, 5, 8};
    double source2[SIZE] = {1, 0, 4, 6};
    double target[SIZE];
    add_ar(SIZE, source1, source2, target);
    print_r(SIZE, target);

    return 0;
}

void add_ar(int rs, double source1[rs], double source2[rs], double target[rs])
{
    int i;
    for (i = 0; i < rs; i++)
        target[i] = source1[i] + source2[i];
}

void print_r(int rs, double arr[rs])
{
    int i;
    for (i = 0; i < rs; i++) {
        printf("%g ", arr[i]);
    }
}
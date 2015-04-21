#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void Swap(int *a, int *b);
void QuickSort(int *arr, int left, int right);

int main()
{
    int num[SIZE];
    int i, j, temp;
    time_t seed = time(NULL);
    srand((unsigned) seed);

    for (i = 0; i < SIZE; i++)
    {
        num[i] = rand() % 10 + 1;
        printf("%d ", num[i]);
    }

    QuickSort(num, 0, (SIZE - 1));

    putchar('\n');
    for (i = 0; i < SIZE; i++)
        printf("%d ", num[i]);
}

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int *arr, int left, int right)
{
    int i, j, privot, temp;
    i = left;
    j = right;
    privot = (left + right) / 2;

    while (i <= j)
    {
        while (arr[i] < privot)
            i++;
        while (arr[j] > privot)
            j--;

        Swap(&arr[i], &arr[j]);
        i++;
        j--;
    }

    if (i < right)
        QuickSort(arr, i, right);
    if (j > left)
        QuickSort(arr, left, j);
}
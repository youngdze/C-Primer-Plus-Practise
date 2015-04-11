#include <stdio.h>

int main(void)
{
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char copy[3];
    arr_slice(arr, copy);

    int i;
    for (i = 0; i < 3; i++)
        putchar(copy[i]);

    return 0;
}


void arr_slice(char *arr, char *copy)
{
    int i, j;
    for (i = (3- 1), j = 0; i < 5; i++, j++)
    {
        copy[j] = arr[i];
    }
}
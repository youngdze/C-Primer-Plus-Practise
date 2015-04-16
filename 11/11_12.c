#include <stdio.h>
#define SIZE 81
void reverse(char *s);

int main(int argc, char *argv[])
{
    char str[SIZE];
    int i;
    while (argv[i])
    {
        reverse(argv[i]);
        fputs(argv[i], stdout);
        putchar('\n');
        i++;
    }

    return 0;
}

#include <string.h>
void reverse(char *s)
{
    char *tp;
    int length= strlen(s);
    int i, j;
    for (i = (length - 1), j = 0; i >= 0; i--, j++)
        *(tp + j) = *(s + i);
    *s = 0;
    while (*tp)
        *s++ = *tp++;
    *s = '\0';
}
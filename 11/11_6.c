#include <stdio.h>
char *ystrncpy(char *dst, const char *src, int size);

int main()
{
    char src[81];
    char dst[81];
    char ch;
    int size;
    int i = 0;

    printf("Enter a string: \n");
    while ((ch = getchar()) != '\n')
    {
        src[i] = ch;
        i++;
    }
    src[i] = '\0';

    printf("Size lime: \n");
    scanf("%d", &size);

    ystrncpy(dst, src, size);
    printf("The copied string: %s\n", dst);

    return 0;
}

char *ystrncpy(char *dst, const char *src, int size)
{
    char *save = dst;
    int i;
    for (i = 0; (*dst = *src) != '\0' && i < size; *dst++, *src++, i++);
    return save;
}
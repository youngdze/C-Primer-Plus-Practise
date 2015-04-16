#include <stdio.h>
#define SIZE 81
void re_blank(char *s);

int main()
{
    char str[SIZE];
    char ch, prev;
    int i;
    printf("Enter some lines: \n");
    while ((ch = getchar()) != EOF && i < (SIZE - 1))
    {
        if (ch == '\n' && prev == '\n')
            break;
        str[i] = ch;
        prev = ch;
        i++;
    }
    str[i] = '\0';
    re_blank(str);
    printf("Lines removed spaces and tabs: \n");
    fputs(str, stdout);

    return 0;
}

#include <string.h>
#include <ctype.h>
void re_blank(char *s)
{
    char *tp;
    int length= strlen(s);
    int i, j;
    for (i = 0, j = 0; i < length; i++)
    {
        if (isblank(*(s + i)))
            continue;
        *(tp + j) = *(s + i);
        j++;
    }
    *s = 0;
    while (*tp)
        *s++ = *tp++;
    *s = '\0';
}
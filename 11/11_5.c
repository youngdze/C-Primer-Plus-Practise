#include <stdio.h>
int is_within(const char * str, int ch);

int main()
{
    char str[81];
    char ch;
    int i = 0;

    printf("Enter a string: \n");
    while ((ch = getchar()) != '\n')
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    printf("Enter a character: \n");
    ch = getchar();

    if (is_within(str, ch))
        printf("%s contains %c.", str, ch);
    else
        printf("%s doesn't contain %c.", str, ch);

    return 0;
}

int is_within(const char * str, int ch)
{
    while (*str)
    {
        if (*str++ == ch)
            return 1;
    }
    return 0;
}
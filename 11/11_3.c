#include <stdio.h>
#include <ctype.h>
char *getFirstWord(const char *str);

int main(void)
{
    char str[81];
    printf("Enter a line: \n");
    gets(str);
    char word[81];
    char *ptr = word;
    char *re = getFirstWord(str);
    while (*re)
        *ptr++ = *re++;
    printf("The first word of \"%s\" is \"%s\".", str, word);

    return 0;
}

char *getFirstWord(const char *str)
{
    char word[81];
    char *ptr = word;
    while (isalpha(*str))
    {
        *ptr++ = *str++;
    }

    return word;
}
#include <stdio.h>
void ygets(char *s);
int ystrlen(const char *s);
char *ystrrev(const char *s);

int main()
{
    char str[81];
    char rev[81];
    printf("Enter a string: ");
    ygets(str);
    puts("");
    char *revPt= ystrrev(str);

    int i = 0;
    while (*revPt)
    {
        rev[i] = *revPt++;
        i++;
    }
    rev[i] = '\0';

    printf("The reverse of %s is %s.", str, rev);

    return 0;
}

void ygets(char *s)
{
    char ch;
    while ((ch = getchar()) != '\n')
        *s++ = ch;
    *s = '\0';

    return;
}

int ystrlen(const char *s)
{
    int c;
    while (*s++)
        c++;
    return c;
}


char *ystrrev(const char *s)
{
    int size = ystrlen(s);
    char rev[81];
    int i, j;
    for (i = (size - 1), j = 0; i >= 0; i--, j++)
        rev[j] = s[i];
    rev[j] = '\0';
    return ((char *) rev);
}
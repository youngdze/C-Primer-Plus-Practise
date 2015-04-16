#include <stdio.h>
#define SIZE 81
char option(char *s);
void p(char *s);
void u(char *s);
void l(char *s);

int main(int argc, char *argv[])
{
    char str[SIZE];
    char ch;
    int i;
    printf("Enter something: \n");
    while ((ch = getchar()) != EOF)
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    switch (option(argv[1]))
    {
        case 'p':
            p(str);
            break;
        case 'u':
            u(str);
            break;
        case 'l':
            l(str);
            break;
        default:
            break;
    }

    return 0;
}

#include <string.h>
char option(char *s)
{
    if (strcmp(s, "-p") == 0)
        return 'p';
    if (strcmp(s, "-u") == 0)
        return 'u';
    if (strcmp(s, "-l") == 0)
        return 'l';
    return 0;
}

void p(char *s)
{
    fputs(s, stdout);
}

#include <ctype.h>
void u(char *s)
{
    while (*s) {
        putchar(toupper(*s));
        *s++;
    }
}

#include <ctype.h>
void l(char *s)
{
    while (*s) {
        putchar(tolower(*s));
        *s++;
    }
}
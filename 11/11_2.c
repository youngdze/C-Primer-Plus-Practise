#include <stdio.h>
#define LEN 10
char * getnchar(char * str, int n);
int main(void)
{
    char input[LEN];
    char *chk;

    chk = getnchar(input, LEN - 1);
    if (chk == NULL)
        puts("Input failed.");
    else
        puts(input);
    puts("Done.\n");

    return 0;
}

char * getnchar(char * str, int n)
{
    int i;
    int ch;

    for (i = 0; i < n; i++)
    {
        ch = getchar();

        if (ch != EOF)
        {
            if (ch == ' ' || ch == '\t' || ch == '\n')
                break;
            str[i] = ch;
        }
        else
        {
            break;
        }
    }
    if (ch == EOF)
        return NULL;
    else
    {
        str[i] = '\0';
        return str;
    }
}
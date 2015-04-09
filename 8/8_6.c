#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main(void)
{
    char chInput;
    chInput = get_first();
    putchar(chInput);

    return 0;
}

char get_first (void)
{
    int ch;

    ch = getchar();
    while ((ch = getchar()) != '\n' && isspace(ch)) {
        while (getchar() != '\n')
            continue;
    }
    return ch;
}
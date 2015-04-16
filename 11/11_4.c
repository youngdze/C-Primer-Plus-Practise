#include <stdio.h>
char * ystrchr(const char * str, int ch);

int main(int argc, char * argv[])
{
    char *strPt;
    char ch;
    strPt= argv[1];
    ch = *argv[2];
    printf("%p", ystrchr(strPt, ch));

}

char * ystrchr(const char * str, int ch)
{
    while (*str)
    {
        if (*str++ == ch)
            return ((char *)str);
    }
    return ((char *) NULL);
}
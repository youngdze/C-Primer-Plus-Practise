#include <stdio.h>
char *string_in(const char *s1, const char *s2);

int main()
{
    char s1[81];
    char s2[81];
    printf("Enter the first string: \n");
    gets(s1);
    printf("Enter the second string: \n");
    gets(s2);
    if (string_in(s1, s2))
        printf("%s contains %s at %p", s1, s2, string_in(s1, s2));
    else
        printf("%s doesn't contain %s.", s1, s2);

    return 0;
}

char *string_in(const char *s1, const char *s2)
{
    while (*s1)
    {
        if(*s2 == *s1)
        {
            char *pt = s1;
            while (*s2)
            {
                if (*s2++ == *s1++)
                    continue;
                else
                    break;
            }
            return pt;
        }
        *s1++;
    }
    return NULL;
}
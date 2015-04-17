#include <ctype.h>
#include <math.h>

int yatoi(const char *s)
{
    int count;
    int i = 0, j = 0;
    while (s[i])
    {
        if (isdigit(s[i])) {
            count++;
            i++;
        } else {
            break;
        }
    }

    double re;
    for (i = (count - 1), j = 0; i >= 0; i--, j++)
        re += (s[j] - '0') * pow(10, i);
    return ((int) re);
}
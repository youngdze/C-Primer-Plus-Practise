#include <stdio.h>
int count = 0;
void foo(int);

int main()
{
    foo(5);
    printf("%d", count);
    return 0;
}

void foo(int n)
{
    if(n > 0) {
        n--;
        foo(n);
        count++;
    }
}
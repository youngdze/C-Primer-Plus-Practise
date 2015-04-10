#include <stdio.h>
void to_base_n (unsigned long n, unsigned m);

int main(void)
{
    unsigned long number;
    unsigned base;
    printf("Enter an integer and the base you want to transfer to(q to quit): \n");
    while (scanf("%lu%u", &number, &base) == 2)
    {
        printf("Base %u equivalent: ", base);
        to_base_n(number, base);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n (unsigned long n, unsigned m)
{
    int r;
    r = n % m;
    if (n >= m)
        to_base_n(n / m, m);
    putchar('0' + r);

    return;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main(void)
{
    int ch;
    char fileName[SIZE];
    FILE *fp;
    long count = 0;

    fputs("Enter the file name: ", stdout);
    fgets(fileName, SIZE, stdin);
    strtok(fileName, "\n");

    if ((fp = fopen(fileName, "r")) == NULL)
    {
        printf("Can't open %s\n", fileName);
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %ld characters\n", fileName, count);
    return 0;
}
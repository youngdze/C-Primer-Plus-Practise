#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(void)
{
    char fileName[40];
    char content[SIZE];
    FILE *fp;
    long int pos;

    printf("Enter the filename: ");
    scanf("%s", fileName);

    if ((fp = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Error opening \"%s\"", fileName);
        exit(EXIT_FAILURE);
    }

    printf("Enter the position(non-number to quit): ");
    while (scanf("%ld", &pos) == 1)
    {
        if (fseek(fp, pos, SEEK_SET) != 0)
        {
            fprintf(stderr, "Error seeking position.\n");
            exit(EXIT_FAILURE);
        }
        if (fgets(content, SIZE - 1, fp) == NULL)
        {
            fprintf(stderr, "Error reading \"%s\".\n", fileName);
            exit(EXIT_FAILURE);
        }
        fputs(content, stdout);
        printf("Enter the position(non-number to quit): ");
    }

    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Error closing \"%s\".\n", fileName);
        exit(EXIT_FAILURE);
    }
    printf("Done.\n");

    return 0 ;
}
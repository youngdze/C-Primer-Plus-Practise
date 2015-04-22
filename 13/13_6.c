#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main()
{
    char srcName[40], destName[40];
    FILE *src, *dest;
    int numSrc, numDest;
    char buffer[SIZE];

    printf("What is the src file: ");
    scanf("%s", srcName);
    printf("What is the dest file: ");
    scanf("%s", destName);

    if ((src = fopen(srcName, "rb")) == NULL)
    {
        fprintf(stderr, "Error opening file %s.\n", srcName);
        exit(1);
    }

    if ((dest = fopen(destName, "wb")) == NULL)
    {
        fprintf(stderr, "Error opening file %s.\n", destName);
        exit(1);
    }

    while (feof(src) == 0)
    {
        if ((numSrc = fread(buffer, 1, SIZE, src)) != SIZE)
        {
            if (ferror(src) != 0)
            {
                fprintf(stderr, "Error reading file %s.\n", srcName);
                exit(1);
            }
        }

        if ((numDest = fwrite(buffer, 1, numSrc, dest)) != numSrc)
        {
            if (ferror(dest) != 0)
            {
                fprintf(stderr, "Error writing to file %s.\n", destName);
                exit(1);
            }
        }
    }

    fclose(src);
    fclose(dest);

    return 0;
}
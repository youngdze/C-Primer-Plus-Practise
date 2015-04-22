#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(int argc, char **argv)
{
    FILE *src, *dest;
    int numSrc, numDest;
    char buffer[SIZE];

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s srcFileName destFileName\n", argv[0]);
        exit(1);
    }

    if ((src = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Error opening file %s.\n", argv[1]);
        exit(1);
    }

    if ((dest = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Error opening file %s.\n", argv[2]);
        exit(1);
    }

    while (feof(src) == 0)
    {
        if ((numSrc = fread(buffer, 1, SIZE, src)) != SIZE)
        {
            if (ferror(src) != 0)
            {
                fprintf(stderr, "Error reading file %s.\n", argv[1]);
                exit(1);
            }
        }

        if ((numDest = fwrite(buffer, 1, numSrc, dest)) != numSrc)
        {
            if (ferror(dest) != 0)
            {
                fprintf(stderr, "Error writing to file %s.\n", argv[2]);
                exit(1);
            }
        }
    }

    fclose(src);
    fclose(dest);

    return 0;
}
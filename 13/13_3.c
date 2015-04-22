#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 1024

int main()
{
    char fileSrc[40], fileDest[40];
    FILE *src, *dest;
    int numSrc, numDest;
    char buffer[SIZE];

    fputs("Enter src filename: ", stdout);
    fgets(fileSrc, 40, stdin);
    strtok(fileSrc, "\n");

    fputs("Enter dest filename: ", stdout);
    fgets(fileDest, 40, stdin);
    strtok(fileDest, "\n");

    if ((src = fopen(fileSrc, "r")) == NULL)
    {
        fprintf(stderr, "Error opening file %s.\n", fileSrc);
        exit(1);
    }

    if ((dest = fopen(fileDest, "w")) == NULL)
    {
        fprintf(stderr, "Error opening file %s.\n", fileDest);
        exit(1);
    }

    while (feof(src) == 0)
    {
        if (fgets(buffer, SIZE, src) == NULL)
        {
            if (ferror(src) != 0)
            {
                fprintf(stderr, "Error reading file %s.\n", fileSrc);
                exit(1);
            }
        }

        int strLength, i;
        strLength = strlen(buffer);
        for (i = 0; i < strLength; i++)
        {
            buffer[i] = toupper(buffer[i]);
        }

        if (fputs(buffer, dest) == EOF)
        {
            if (ferror(dest) != 0)
            {
                fprintf(stderr, "Error writing to file %s.\n", fileDest);
                exit(1);
            }
        }

    }

    fclose(src);
    fclose(dest);

    return 0;
}
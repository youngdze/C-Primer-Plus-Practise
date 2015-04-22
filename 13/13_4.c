#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(int argc, char **argv)
{
    int i;
    FILE *fp;
    char buffer[SIZE];

    if (argc < 2) {
        fprintf(stderr, "Usage: %s fileName1 fileName2..\n", argv[0]);
        exit(1);
    }

    for (i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Open \"%s\" failed.\n", argv[i]);
            exit(1);
        }

        while (feof(fp) == 0) {
            if (fgets(buffer, SIZE, fp) == NULL) {
                fprintf(stderr, "Read \"%s\" failed.\n", argv[i]);
                exit(1);
            }

            fprintf(stdout, "\n%s: \n", argv[i]);
            if (fputs(buffer, stdout) == EOF) {
                fprintf(stderr, "Print \"%s\" failed.\n", argv[i]);
                exit(1);
            }
            putchar('\n');
        }

        fclose(fp);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024
char stName[40], ndName[40];
FILE *st, *nd;
char stBuffer[SIZE], ndBuffer[SIZE];
int taskA();
int taskB();

int main(int argc, char **argv)
{

    if (argc != 3) {
        fprintf(stderr, "Usage: %s fileName1 fileName2\n", argv[0]);
        exit(1);
    }

    strcpy(stName, argv[1]);
    strcpy(ndName, argv[2]);

    if (taskB() == 1)
    {
        fprintf(stderr, "Error opening file.\n");
        exit(2);
    }
    else if (taskB() == 2)
    {
        fprintf(stderr, "Error closing file.\n", );
        exit(3);
    }


    return 0;
}

int taskA()
{
    if ((st = fopen(stName, "r")) == NULL || (nd = fopen(ndName, "r")) == NULL)
        return 1;

    fseek(st, 0L, SEEK_SET);
    fseek(nd, 0L, SEEK_SET);

    while (feof(st) == 0 || feof(nd) == 0) {
        if (feof(st) == 0) {
            if (fgets(stBuffer, SIZE, st) != NULL) {
                fputs(stBuffer, stdout);
            } else {
                fprintf(stderr, "Read %s failed.\n", stName);
            }
        }

        if (feof(nd) == 0) {
            if (fgets(ndBuffer, SIZE, nd) != NULL) {
                fputs(ndBuffer, stdout);
            } else {
                fprintf(stderr, "Read %s failed.\n", ndName);
            }
        }
    }

    if (fclose(st) != 0)
        return 2;
    if (fclose(nd) != 0)
        return 2;

    return 0;
}

int taskB()
{
    if ((st = fopen(stName, "r")) == NULL || (nd = fopen(ndName, "r")) == NULL)
        return 1;

    fseek(st, 0L, SEEK_SET);
    fseek(nd, 0L, SEEK_SET);

    while (feof(st) == 0 || feof(nd) == 0) {
        if (feof(st) == 0) {
            if (fgets(stBuffer, SIZE, st) != NULL) {
                strtok(stBuffer, "\r");
                fputs(stBuffer, stdout);
                putchar(' ');
            } else {
                fprintf(stderr, "Read %s failed.\n", stName);
            }
        }

        if (feof(nd) == 0) {
            if (fgets(ndBuffer, SIZE, nd) != NULL) {
                fputs(ndBuffer, stdout);
            } else {
                fprintf(stderr, "Read %s failed.\n", ndName);
            }
        }
    }

    if (fclose(st) != 0)
        return 2;
    if (fclose(nd) != 0)
        return 2;

    return 0;
}
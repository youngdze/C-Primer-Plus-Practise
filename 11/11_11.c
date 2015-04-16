#include <stdio.h>
#include <ctype.h>
#define SIZE 81

int main()
{
    char str[SIZE];
    char ch;
    int count_characters, count_uppercase_letters, count_lowercase_letters, count_punctuations;
    printf("Enter something: \n");
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
            count_characters++;
        if (isupper(ch))
            count_uppercase_letters++;
        if (islower(ch))
            count_lowercase_letters++;
        if (ispunct(ch))
            count_punctuations++;
    }

    printf("Characters: %d\nUppercase letters: %d\nLowercase letters: %d\nPunctuations: %d\n", count_characters, count_uppercase_letters, count_lowercase_letters, count_punctuations);

    return 0;
}
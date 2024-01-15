

/* >>> Longest Word Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter two words, and the program combines the two words with each other in one word, so that the word is the longest at first and prints the output on the screen. <<< */

#include <stdio.h>
#include <string.h>

int longest_word();

int main()
{
    printf("\n\nYou welcome in Longest Word Program ( Version 3 ) ..\n\n");

    longest_word();

    return 0;
}

// Functions ..
// longest word function;
int longest_word()
{
    // Declaration arrays of characters;
    char word_1[25], word_2[25];

    // Receive values from the user;
    printf("Please enter word 1 : ");
    scanf("%s", word_1);

    printf("Please enter word 2 : ");
    scanf("%s", word_2);

    // Check length arrays;
    int len_1 = 0;
    for (int i = 0; i <= word_1[i]; i++)
    {
        len_1++;
    }
    // printf("\n%d", len_1);

    int len_2 = 0;
    for (int i = 0; i <= word_2[i]; i++)
    {
        len_2++;
    }
    // printf("\n%d", len_2);

    // Printing largest word;
    if (len_1 > len_2)
    {
        printf("\n%s %s", word_1, word_2);
    }
    else
    {
        printf("\n%s %s", word_2, word_1);
    }

    printf("\n\n\n");
}
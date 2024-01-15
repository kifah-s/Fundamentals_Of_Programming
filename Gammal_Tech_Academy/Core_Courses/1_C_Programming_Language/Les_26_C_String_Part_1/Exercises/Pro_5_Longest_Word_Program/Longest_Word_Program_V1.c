

/* >>> Longest Word Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter two words and prints the longer word. <<< */

#include <stdio.h>
#include <string.h>

int longest_word();

int main()
{
    printf("\n\nYou welcome in Longest Word Program ( Version 1 ) ..\n\n");

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

    printf("\n");

    // Check longest word;
    if (strlen(word_1) > strlen(word_2))
    {
        printf("The longest word is : %s", word_1);
    }
    else
    {
        printf("The longest word is : %s", word_2);
    }

    printf("\n\n\n");
}
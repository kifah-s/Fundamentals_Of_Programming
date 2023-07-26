

/* >>> Longest Word Program ( Version 5 ) <<< */

/* >>> A program that asks the user to enter two words, and the program combines the two words with each other in one word, so that the word is the longest at first and prints the output on the screen. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int longest_word();

int main()
{
    welcomeMassageFun();
    longest_word();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Longest Word Program ( Version 5 ) ..\n\n");
}

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
    if (strlen(word_1) > strlen(word_2))
    {
        strcat(word_1, word_2);
        printf("\n%s", word_1);
    }
    else
    {
        strcat(word_2, word_1);
        printf("\n%s", word_2);
    }
    printf("\n\n\n");
}
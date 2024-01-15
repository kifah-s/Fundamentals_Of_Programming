

/* >>> Longest Word Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter two words, and the program combines the two words with each other in one word, so that the word is the longest at first and prints the output on the screen. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *word1Fun();
char *word2Fun();
int longest_word(char *word_1, char *word_2);

int main()
{
    welcomeMassageFun();

    char *word_1 = word1Fun();
    char *word_2 = word2Fun();
    longest_word(word_1, word_2);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Longest Word Program ( Version 6 ) ..\n\n");
}

// get word 1 function;
char *word1Fun()
{
    // Declaration arrays of characters;
    static char word_1[25];

    // Receive values from the user;
    printf("Please enter word 1 : ");
    scanf("%s", word_1);

    return word_1;
}

// get word 2 function;
char *word2Fun()
{
    // Declaration arrays of characters;
    static char word_2[25];

    // Receive values from the user;
    printf("Please enter word 2 : ");
    scanf("%s", word_2);

    return word_2;
}

// longest word function;
int longest_word(char *word_1, char *word_2)
{
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
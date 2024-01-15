

/* >>> Longest Word Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter two words and prints the longer word. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getWord1Fun();
char *getWord2Fun();
int longest_word(char *word_1, char *word_2);

int main()
{
    welcomeMassageFun();

    char *word_1 = getWord1Fun();
    char *word_2 = getWord2Fun();
    longest_word(word_1, word_2);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Longest Word Program ( Version 4 ) ..\n\n");
}

// get word 1 function;
char *getWord1Fun()
{
    // Declaration arrays of characters;
    static char word_1[25];

    // Receive values from the user;
    printf("Please enter word 1 : ");
    scanf("%s", word_1);

    return word_1;
}

// get word 2 function;
char *getWord2Fun()
{
    // Declaration arrays of characters;
    static char word_2[25];

    // Receive values from the user;
    printf("Please enter word 2 : ");
    scanf("%s", word_2);
    printf("\n");

    return word_2;
}

// longest word function;
int longest_word(char *word_1, char *word_2)
{
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
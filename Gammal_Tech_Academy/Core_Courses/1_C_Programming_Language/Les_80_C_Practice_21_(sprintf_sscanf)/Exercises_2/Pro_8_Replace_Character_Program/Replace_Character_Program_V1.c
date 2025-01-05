

//* Replace Character Program (Version 1).

/*
* Ask the user for a word and a character to replace in that word,
* Replace the specified character with an asterisk (*) and print the modified word.

! Input:
! Please enter a word: kifah
! Please enter character to replace: f

! Output:
! Modified Word: ki*ah
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char word[], char character, char sym);

int main()
{
    // Declare Variables.
    char myWord[50], myCharacter, symbol = '*';

    // Call Functions.
    resultFun(myWord, myCharacter, symbol);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Replace Character Program (Version 1) ..\n\n");
}

// Git Word - Function.
void gitWordFun(char word[])
{
    printf("Please enter a word: ");
    scanf("%s", word);
}

// Git Character - Function.
char gitCharacterFun(char character)
{
    printf("Please enter a character to replace: ");
    scanf(" %c", &character);

    return character;
}

// Replace Character - Function.
void replaceCharacterFun(char word[], char character, char sym)
{
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (word[i] == character)
        {
            word[i] = sym;
        }
    }
}

// Result - Function.
void resultFun(char word[], char character, char sym)
{
    printWelcomeMessageFun();
    gitWordFun(word);
    character = gitCharacterFun(character);
    replaceCharacterFun(word, character, sym);

    printf("\nModified Word: %s\n\n", word);
}
//* End Function ..

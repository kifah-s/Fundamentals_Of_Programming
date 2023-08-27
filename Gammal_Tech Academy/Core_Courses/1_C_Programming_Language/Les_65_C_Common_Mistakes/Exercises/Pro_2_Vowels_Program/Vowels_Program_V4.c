

/* >>> Vowels Program ( Version 4 ) <<< */

/* >>> A program that asks the user to write a sentence with a maximum of 50 characters and count the number of vowel characters. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

void welcomeMassageFun();
void getUsefulPhraseFun(char usefulPhrase[50]);
void vowelCharacterNumbersFun(char usefulPhrase[50]);

int main()
{
    welcomeMassageFun();

    char usefulPhrase[50];

    getUsefulPhraseFun(usefulPhrase);
    // printf("%s", usefulPhrase);

    vowelCharacterNumbersFun(usefulPhrase);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Vowels Program ( Version 4 ) ..\n\n");
}

// Get Useful phrase / Function.
void getUsefulPhraseFun(char usefulPhrase[50])
{
    printf("Please enter a Useful phrase: ");
    scanf("%50[^\n]", usefulPhrase);
}

// Useful phrase Numbers / Function.
void vowelCharacterNumbersFun(char usefulPhrase[50])
{
    int counter = 0;
    char smallLetters;
    for (int i = 0; i < 50; i++)
    {
        smallLetters = tolower(usefulPhrase[i]);
        if (smallLetters == 'a' || smallLetters == 'e' || smallLetters == 'i' || smallLetters == 'o' || smallLetters == 'u')
        {
            counter++;
        }
    }
    printf("\nVowel Characters Numbers = %d\n\n\n", counter);
}



//* Extract Two Words Program (Version 1).

/*
* Ask the user for a sentence, extract two words, and print them.

! Input:
! Please enter a sentence: Learning C Programming

! Output:
! First Word: Learning
! Second Word: C
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char sen[], char firWord[], char secWord[]);

int main()
{
    // Declare Variables.
    char sentence[100], firstWord[25], secondWord[25];

    // Call Functions.
    resultFun(sentence, firstWord, secondWord);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extract Two Words Program (Version 1) ..\n\n");
}

// Git Sentence - Function.
void gitSentenceFun(char sen[])
{
    printf("Please enter a sentence: ");
    scanf(" %[^\n]", sen);
}

// Extract Two Words - Function.
void extractTwoWordsFun(char sen[], char firWord[], char secWord[])
{
    sscanf(sen, "%s %s", firWord, secWord);
}

// Result - Function.
void resultFun(char sen[], char firWord[], char secWord[])
{
    printWelcomeMessageFun();
    gitSentenceFun(sen);
    extractTwoWordsFun(sen, firWord, secWord);

    printf("\nFirst Word: %s\n", firWord);
    printf("Second Word: %s\n\n", secWord);
}
//* End Function ..

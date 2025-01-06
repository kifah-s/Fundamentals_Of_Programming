

//* To Lowercase Program (Version 1).

/*
* Write a program to convert uppercase characters in a string to lowercase.

! Input:
! Please enter a string: HELLO WORLD

! Output:
! String in LowerCase: hello world
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(char sen[]);

int main()
{
    // Declare Variables.
    char mySentence[50];

    // Call Functions.
    resultFun(mySentence);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in To Lowercase Program (Version 1) ..\n\n");
}

// Git Sentence - Function.
void gitSentenceFun(char sen[])
{
    printf("Please enter a string: ");
    scanf("%[^\n]", sen);
}

// Search Vowels And Sentence - Function.
void searchVowelsAndSentenceFun(char sen[])
{
    int len = strlen(sen);
    for (int i = 0; i < len; i++)
    {
        sen[i] = tolower(sen[i]);
    }

    printf("String in LowerCase: %s\n\n", sen);
}

// Result - Function.
void resultFun(char sen[])
{
    printWelcomeMessageFun();
    gitSentenceFun(sen);
    searchVowelsAndSentenceFun(sen);
}
//* End Function ..



//* Number Of Vowels Program (Version 2).

/*
* Create a program to count the number of vowels and consonants in a given string.

! Input:
! Please enter a string: Hello World

! Output:
! Number of Vowels: 2
! Number of Consonants: 3
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(char sen[], int vow, int con);

int main()
{
    // Declare Variables.
    char mySentence[50];
    int vowels = 0, consonants = 0;

    // Call Functions.
    resultFun(mySentence, vowels, consonants);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Number Of Vowels Program (Version 2) ..\n\n");
}

// Git Sentence - Function.
void gitSentenceFun(char sen[])
{
    printf("Please enter a string: ");
    scanf("%[^\n]", sen);
}

// Search Vowels And Sentence - Function.
void searchVowelsAndSentenceFun(char sen[], int vow, int con)
{
    int len = strlen(sen);


    for (int i = 0; i < len; i++)
    {
        sen[i] = tolower(sen[i]);
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }

    // printf("%s", sen);
    printf("\nNumber of Vowels: %d\n", vow);
    printf("Number of Consonants %d\n\n", con);
}

// Result - Function.
void resultFun(char sen[], int vow, int con)
{
    printWelcomeMessageFun();
    gitSentenceFun(sen);
    searchVowelsAndSentenceFun(sen, vow, con);
}
//* End Function ..

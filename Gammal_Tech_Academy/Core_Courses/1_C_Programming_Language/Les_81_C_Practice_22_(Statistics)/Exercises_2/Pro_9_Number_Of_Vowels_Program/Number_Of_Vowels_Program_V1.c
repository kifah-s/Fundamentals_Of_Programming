

//* Number Of Vowels Program (Version 1).

/*
* Create a program to count the number of vowels and consonants in a given string.

! Input:
! Please enter a string: Hello World

! Output:
! Number of Vowels: 2
! Number of Consonants: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
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
    printf("\n\nYou welcome in Number Of Vowels Program (Version 1) ..\n\n");
}

// Git Sentence - Function.
void gitSentenceFun(char sen[])
{
    printf("Please enter a string: ");
    scanf("%[^\n]", sen);
    printf("%s", sen);
}

// Search Vowels And Sentence - Function.
void searchVowelsAndSentenceFun(char sen[], int vow, int con)
{
    int len = strlen(sen);
    for (int i = 0; i < len; i++)
    {
        if (sen[i] == 'A' || sen[i] == 'a' || sen[i] == 'E' || sen[i] == 'e' || sen[i] == 'I' || sen[i] == 'i' || sen[i] == 'O' || sen[i] == 'o' || sen[i] == 'U' || sen[i] == 'u')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }

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

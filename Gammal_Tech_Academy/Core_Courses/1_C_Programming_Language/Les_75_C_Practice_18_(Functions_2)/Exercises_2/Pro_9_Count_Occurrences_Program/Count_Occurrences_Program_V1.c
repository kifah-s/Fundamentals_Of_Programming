

//* Count Occurrences Program (Version 1).

/*
* Write a program with a function countOccurrences that takes a character and a string as input,
* and returns the count of occurrences of that character in the string,
* In the main function, take a character and a string as input,
* call the countOccurrences function, and print the count.

! Input:
! Please enter a string: Kifah
! Please enter a character: f

! Output:
! Occurrences of f in the string: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], char myChar, int cou);

int main()
{
    // Declare Variables.
    char myString[100], myChar;
    int counter = 0;

    // Call Functions.
    resultFun(myString, myChar, counter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Count Occurrences Program (Version 1) ..\n\n");
}

// Get String - Function.
void getStringFun(char myStr[])
{
    printf("Please enter a string: ");
    scanf("%s", myStr);
}

// Get Character - Function.
char getCharacterFun(char myChar)
{
    printf("Please enter a character: ");
    scanf(" %c", &myChar);

    return myChar;
}

// Count Occurrences - Function.
int countOccurrencesFun(char myStr[], char myChar, int cou)
{
    int length = strlen(myStr);

    for (int i = 0; i < length; i++)
    {
        if (myStr[i] == myChar)
        {
            cou++;
        }
    }

    return cou;
}

// Result - Function.
void resultFun(char myStr[], char myChar, int cou)
{
    printWelcomeMessageFun();
    getStringFun(myStr);
    myChar = getCharacterFun(myChar);
    cou = countOccurrencesFun(myStr, myChar, cou);
    printf("Occurrences of %c in the string: %d\n\n", myChar, cou);

    // printf("\n\n");
}
//* End Function ..

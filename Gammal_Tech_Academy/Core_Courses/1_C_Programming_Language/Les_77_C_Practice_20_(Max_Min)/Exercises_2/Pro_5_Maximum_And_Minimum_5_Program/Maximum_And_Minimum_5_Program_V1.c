

//* Maximum And Minimum 5 Program (Version 1).

/*
* Write a program to find the maximum and minimum characters in a string.

! Output:
! Maximum Character: o
! Minimum Character: e
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myArr[], int len, char max, char min);

int main()
{
    // Declare Variables.
    char myName[] = "hello";
    int length = strlen(myName);
    char maximumCharacter = myName[0], minimumCharacter = myName[0];

    // Call Functions.
    resultFun(myName, length, maximumCharacter, minimumCharacter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 5 Program (Version 1) ..\n\n");
}

// Find Maximum Character - Function.
char findMaximumCharacterFun(char myArr[], int len, char max)
{
    for (int i = 0; i < len; i++)
    {
        if (myArr[i] > max)
        {
            max = myArr[i];
        }
    }

    return max;
}

// Find Minimum Character - Function.
char findMinimumCharacterFun(char myArr[], int len, char min)
{
    for (int i = 0; i < len; i++)
    {
        if (myArr[i] < min)
        {
            min = myArr[i];
        }
    }

    return min;
}

// Result - Function.
void resultFun(char myArr[], int len, char max, char min)
{
    printWelcomeMessageFun();
    max = findMaximumCharacterFun(myArr, len, max);
    min = findMinimumCharacterFun(myArr, len, min);

    printf("Maximum Character: %c\n", max);
    printf("Minimum Character: %c\n\n", min);
}
//* End Function ..

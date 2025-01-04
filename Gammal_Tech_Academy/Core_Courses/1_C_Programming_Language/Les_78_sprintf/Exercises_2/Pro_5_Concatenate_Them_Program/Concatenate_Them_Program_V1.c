

//* Concatenate Them Program (Version 1).

/*
* Write a program that takes two strings as input from the user,
* and uses sprintf to concatenate them.

! Input:
! Please enter the first string: kifah
! Please enter the second string: saloum

! Output:
! Concatenate String: kifahsaloum
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char firName[], char secName[], char myStr[]);

int main()
{
    // Declare Variables.
    char firstName[50], secondName[50];
    char myString[100];

    // Call Functions.
    resultFun(firstName, secondName, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Them Program (Version 1) ..\n\n");
}

// Get First Name - Function.
void getFirstNameFun(char firName[])
{
    printf("Please enter the First string: ");
    scanf("%s", firName);
}

// Get Second Name - Function.
void getSecondNameFun(char secName[])
{
    printf("Please enter the Second string: ");
    scanf("%s", secName);
}

// Concatenate First and Second Name - Function.
void concatenateFirstAndSecondNameFun(char firName[], char secName[], char myStr[])
{
    // sprintf(myStr, "Concatenate String: %s %s", firName, secName);
    sprintf(myStr, "%s %s", firName, secName);
}

// Result - Function.
void resultFun(char firName[], char secName[], char myStr[])
{
    printWelcomeMessageFun();
    getFirstNameFun(firName);
    getSecondNameFun(secName);
    concatenateFirstAndSecondNameFun(firName, secName, myStr);

    // printf("\n%s\n\n", myStr);
    printf("\nConcatenate String: %s\n\n", myStr);
}
//* End Function ..

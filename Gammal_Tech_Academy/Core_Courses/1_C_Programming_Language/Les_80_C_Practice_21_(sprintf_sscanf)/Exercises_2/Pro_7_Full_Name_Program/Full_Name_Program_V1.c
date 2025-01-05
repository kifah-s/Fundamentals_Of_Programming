

//* Full Name Program (Version 1).

/*
* Ask the user for their first name and last name, then create and print their full name.

! Input:
! Please enter first name: kifah
! Please enter last name: saloum

! Output:
! Full Name: kifah saloum
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char fullName[], char firName[], char lasName[]);

int main()
{
    // Declare Variables.
    char fullName[100], firstName[50], lastName[50];

    // Call Functions.
    resultFun(fullName, firstName, lastName);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Full Name Program (Version 1) ..\n\n");
}

// Git First Name - Function.
void gitFirstNameFun(char firName[])
{
    printf("Please enter First Name: ");
    scanf("%s", firName);
}

// Git Last Name - Function.
void gitLastNameFun(char lasName[])
{
    printf("Please enter Last Name: ");
    scanf("%s", lasName);
}

// Full Name - Function.
void fullNameFun(char fullName[], char firName[], char lasName[])
{
    sprintf(fullName, "Full Name: %s %s", firName, lasName);
}

// Result - Function.
void resultFun(char fullName[], char firName[], char lasName[])
{
    printWelcomeMessageFun();
    gitFirstNameFun(firName);
    gitLastNameFun(lasName);
    fullNameFun(fullName, firName, lasName);

    printf("\n%s\n\n", fullName);
}
//* End Function ..

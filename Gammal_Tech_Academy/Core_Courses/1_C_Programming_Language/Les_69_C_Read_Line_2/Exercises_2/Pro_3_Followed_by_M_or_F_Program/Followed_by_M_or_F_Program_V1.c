

//* Followed by M or F Program (Version 1).

/*
* Write a program to read a full name followed by 'm' or 'f' and extract them.

! Input:
! Enter full name followed by (m/f): john Doe m

! Output:
! Full Name: john Doe
! Gender: m
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printFullNameAndGenderFun(char fName[50], char gen[50]);

int main()
{
    // Declare Variables.
    char fullName[50], gender[50];

    // Call Functions.
    printFullNameAndGenderFun(fullName, gender);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Followed by M or F Program (Version 1) ..\n\n");
}

// Read Name - Function.
void readNameFun(char fName[50], char gen[50])
{
    printf("Enter full name followed by (m/f): ");
    // scanf("%[^m]%[^\n]", fName, gen);
    scanf("%[^m]", fName);
    scanf("%[^\n]", gen);
}

// Print Full Name And Gender - Function.
void printFullNameAndGenderFun(char fName[50], char gen[50])
{
    welcomeMessageFun();
    readNameFun(fName, gen);

    printf("\nFull Name: %s\n", fName);
    printf("Gender: %s\n\n", gen);
}
//* End Function ..

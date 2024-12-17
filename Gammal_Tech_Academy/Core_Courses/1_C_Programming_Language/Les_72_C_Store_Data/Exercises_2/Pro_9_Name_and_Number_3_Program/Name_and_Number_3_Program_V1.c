

//* Name and Number 3 Program (Version 1).

/*
* Create a program that allows the user to input a name and number,
* and appends it to a file named "simple_contacts.txt"

! Input & Output:
! Please enter a name: kifah
! Please enter a number: 123456789
! Contact added successfully.

! Output:
! kifah 123456789
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char name[50], char num[50], FILE *filePoi);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char name[50], number[50];

    // Call Functions.
    resultFun(name, number, filePointer);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Name and Number 3 Program (Version 1) ..\n\n");
}

// Receive Name - Function.
void receiveNameFun(char name[50])
{
    printf("Please enter a name: ");
    scanf(" %[^\n]", name);
}

// Receive Number - Function.
void receiveNumberFun(char num[50])
{
    printf("Please enter a number: ");
    scanf(" %[^\n]", num);
}

// Save Name And Number In File - Function.
void saveNameAndNumberInFileFun(FILE *filePoi, char name[50], char num[50])
{
    // Create File.
    filePoi = fopen("simple_contacts.txt", "a");

    // Print Name and Number In File.
    fprintf(filePoi, "%s ", name);
    fprintf(filePoi, "%s\n", num);

    // Close File.
    fclose(filePoi);

    // Added successfully.
    printf("\nContact added successfully.\n\n");
}

// Result - Function.
void resultFun(char name[50], char num[50], FILE *filePoi)
{
    welcomeMessageFun();
    receiveNameFun(name);
    receiveNumberFun(num);
    saveNameAndNumberInFileFun(filePoi, name, num);
}

//* End Function ..

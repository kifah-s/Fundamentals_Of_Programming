

//* Clears all Existing Program (Version 1).

/*
* Create a program that clears all existing contacts from "contact.txt"

! Input:
! omar
! aly
! ahmed

! Output:
! All Contact Cleared.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char name[50], FILE *filePoi);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char name[50];

    // Call Functions.
    resultFun(name, filePointer);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Clears all Existing Program (Version 1) ..\n\n");
}

// Receive Name - Function.
void receiveNameFun(char name[50])
{
    printf("Please enter a name: ");
    scanf(" %[^\n]", name);
}

// Save Name And Number In File - Function.
void saveNameAndNumberInFileFun(FILE *filePoi, char name[50])
{
    // Create File.
    filePoi = fopen("contact.txt", "a");

    // Print Name and Number In File.
    fprintf(filePoi, "%s\n", name);

    // Close File.
    fclose(filePoi);
}

// Cleared All Contact  - Function.
void clearedAllContactFun(FILE *filePoi)
{
    // Open File.
    filePoi = fopen("contact.txt", "w");

    // Close File.
    fclose(filePoi);

    printf("All Contact Cleared.\n\n");
}

// Result - Function.
void resultFun(char name[50], FILE *filePoi)
{
    welcomeMessageFun();
    receiveNameFun(name);
    saveNameAndNumberInFileFun(filePoi, name);
    // clearedAllContactFun(filePoi);
}

//* End Function ..

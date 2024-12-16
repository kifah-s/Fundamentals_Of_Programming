

//* Numbers Program (Version 1).

/*
* Create a program that reads contact information from "contact.txt" and prints only the numbers.

! Input:
! ahmed 012345
! aly 06789

! Output:
! Numbers: 012345
! Numbers: 06789
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
    printf("\n\nYou welcome in Numbers Program (Version 1) ..\n\n");
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
    filePoi = fopen("contact.txt", "a");

    // Print Name and Number In File.
    fprintf(filePoi, "%s ", name);
    fprintf(filePoi, "%s\n", num);

    // Close File.
    fclose(filePoi);
}

// Read And Print Name And Number - Function.
void readAndPrintNameAndNumberFun(FILE *filePoi)
{
    // Open File.
    filePoi = fopen("contact.txt", "a+");

    // Declare Variables.
    char name[50], number[50];

    // Read Name And Number.
    while (fscanf(filePoi, "%s %s", name, number) != EOF)
    {
        printf("Number: %s\n", number);
    }

    // Close File.
    fclose(filePoi);
}

// Result - Function.
void resultFun(char name[50], char num[50], FILE *filePoi)
{
    welcomeMessageFun();
    receiveNameFun(name);
    receiveNumberFun(num);
    saveNameAndNumberInFileFun(filePoi, name, num);
    readAndPrintNameAndNumberFun(filePoi);
}

//* End Function ..

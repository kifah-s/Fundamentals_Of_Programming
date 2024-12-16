

//* Found Contact Program (Version 1).

/*
* Write a program that allows the user to search for a specific contact by entering a name,
* If the contact is found, display the corresponding number,
* otherwise, print a message indicating that the contact is not found.

! Input:
! omar 12345
! aly 6789
! ahmed 112233

! Input & Output:
! Please enter a name to search: aly
! Contact found!! Number: 6789
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char name[50], char num[50], FILE *filePoi, char seNa[50]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char name[50], number[50], searchName[50];

    // Call Functions.
    resultFun(name, number, filePointer, searchName);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Found Contact Program (Version 1) ..\n\n");
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

// search Name - Function.
void searchNameFun(char seNa[50])
{
    printf("Please enter a name to search: ");
    scanf(" %[^\n]", seNa);
}

// Search Name And Print Number - Function.
void searchNameAndPrintNumberFun(FILE *filePoi, char seNa[50])
{
    // Open File.
    filePoi = fopen("contact.txt", "a+");

    // Declare Variables.
    char name[50], number[50];
    bool foundName = false;

    // Read Name And Number.
    while (fscanf(filePoi, "%s %s", name, number) != EOF)
    {
        if (strcmp(seNa, name) == 0)
        {
            foundName = true;
            break;
        }
    }

    if (foundName)
    {
        printf("Contact Found!! Number: %s\n", number);
    }
    else
    {
        printf("Contact Not Found!!\n");
    }

    // Close File.
    fclose(filePoi);
}

// Result - Function.
void resultFun(char name[50], char num[50], FILE *filePoi, char seNa[50])
{
    welcomeMessageFun();
    receiveNameFun(name);
    receiveNumberFun(num);
    saveNameAndNumberInFileFun(filePoi, name, num);
    searchNameFun(seNa);
    searchNameAndPrintNumberFun(filePoi, seNa);
}

//* End Function ..

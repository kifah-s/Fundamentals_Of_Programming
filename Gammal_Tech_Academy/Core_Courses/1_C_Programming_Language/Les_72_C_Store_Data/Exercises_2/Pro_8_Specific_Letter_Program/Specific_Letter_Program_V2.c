

//* Specific Letter Program (Version 2).

/*
* Write a program that reads contact information from "contact.txt",
* and prints the contacts whose names start with a specific letter entered by the user.

! Input:
! menna 0445566
! ahmad 0778899
! AbdulRahman 0112233

! Input & Output:
! Please enter the starting letter for contacts: A
! Name: ahmed, Number: 0778899
! Name: AbdulRahman, Number: 0112233
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void resultFun(char name[50], char num[50], FILE *filePoi, char speLett);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char name[50], number[50], specificLetter = 'a';

    // Call Functions.
    resultFun(name, number, filePointer, specificLetter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Specific Letter Program (Version 2) ..\n\n");
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

// Receive Specific Letter - Function.
char receiveSpecificLetterFun(char speLett)
{
    printf("Please enter the starting letter for contacts: ");
    scanf(" %c", &speLett);

    return speLett;
}

// Read And Print Contacts - Function.
void readAndPrintContactsFun(FILE *filePoi, char speLett)
{
    // Open File.
    filePoi = fopen("contact.txt", "a+");

    // Declare Variables.
    char name[50], number[50];

    // Read Name And Number.
    while (fscanf(filePoi, "%s %s", name, number) != EOF)
    {
        if (speLett == name[0] || speLett == name[0] + 32)
        {
            printf("Name: %s, Number: %s\n", name, number);
        }
    }

    printf("\n\n");

    // Close File.
    fclose(filePoi);
}

// Result - Function.
void resultFun(char name[50], char num[50], FILE *filePoi, char speLett)
{
    welcomeMessageFun();
    receiveNameFun(name);
    receiveNumberFun(num);
    saveNameAndNumberInFileFun(filePoi, name, num);
    speLett = receiveSpecificLetterFun(speLett);
    readAndPrintContactsFun(filePoi, speLett);
}

//* End Function ..

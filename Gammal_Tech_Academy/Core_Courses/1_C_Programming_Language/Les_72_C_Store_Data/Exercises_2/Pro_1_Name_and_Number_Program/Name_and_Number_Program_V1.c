

//* Name and Number Program (Version 1).

/*
* Write a program that allows the user to input contact information (name and number),
* and appends it to a file named "contact.txt",
* The program should then read and display all existing contacts from the file.

! Input:
! Please enter name: kifah
! Please enter number: 00963998621421

! Output:
! kifah 00963998621421
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
    printf("\n\nYou welcome in Name and Number Program (Version 1) ..\n\n");
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
    char ch;

    // Read Name And Number.
    while (fscanf(filePoi, "%c", &ch) != EOF)
    {
        printf("%c", ch);
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

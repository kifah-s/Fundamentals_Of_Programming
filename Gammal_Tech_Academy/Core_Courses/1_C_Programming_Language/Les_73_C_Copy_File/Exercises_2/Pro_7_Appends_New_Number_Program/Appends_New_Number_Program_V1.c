

//* Appends New Number Program (Version 1).

/*
* Write a program that appends a new number to an existing file containing a series of numbers.

! Output:
! 10 20 30 40 50
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi);

int main()
{
    // Declare Variables.
    FILE *filePointer;

    // Call Functions.
    resultFun(filePointer);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Appends New Number Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("numbers.txt", "w");

    // Write In File.
    fprintf(filePoi, "10 20 30 40");

    // Close File.
    fclose(filePoi);
}

// Appends New Number - Function.
void appendsNewNumberFun(FILE *filePoi)
{
    // Open File.
    filePoi = fopen("numbers.txt", "a");

    // Appends New Number.
    fprintf(filePoi, " 50");

    // Close Files.
    fclose(filePoi);
}

// Result - Function.
void resultFun(FILE *filePoi)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    appendsNewNumberFun(filePoi);
}
//* End Function ..

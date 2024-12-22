

//* Append New Sentence Program (Version 1).

/*
* Create a program that appends a new sentence to an existing file.

! Output:
! This is a new sentence.
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
    printf("\n\nYou welcome in Append New Sentence Program (Version 1) ..\n\n");
}

// Create File - Function.
void createFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("file.txt", "w");

    // Write In File.
    fprintf(filePoi, "\n");

    // Close File.
    fclose(filePoi);
}

// Write In File - Function.
void writeInFileFun(FILE *filePoi)
{
    // Open File.
    filePoi = fopen("file.txt", "a");

    // Write In File.
    fprintf(filePoi, "This is a new sentence.");

    // Close Files.
    fclose(filePoi);
}

// Result - Function.
void resultFun(FILE *filePoi)
{
    printWelcomeMessageFun();
    createFileFun(filePoi);
    writeInFileFun(filePoi);
}
//* End Function ..

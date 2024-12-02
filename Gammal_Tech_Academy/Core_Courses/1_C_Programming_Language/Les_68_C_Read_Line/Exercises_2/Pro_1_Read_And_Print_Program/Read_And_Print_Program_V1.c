

//* Read And Print Program (Version 1).

/*
* Write a program to read and print a line from the file "example.txt".

! Input:
! This program reads and prints a line from a file using scanf.

! Output:
! Line: This program reads and prints a line from a file using scanf.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, char line[100]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char myLine[100];

    // Call Functions.
    readFromFileFun(filePointer, myLine);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read And Print Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("example.txt", "w");

    // Write in File.
    fprintf(filePoi, "This program reads and prints a line from a file using scanf.");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char line[100])
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("example.txt", "r");

    // Read From File.
    fscanf(filePoi, "%[^\n]", line);

    printf("Line: %s\n\n", line);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

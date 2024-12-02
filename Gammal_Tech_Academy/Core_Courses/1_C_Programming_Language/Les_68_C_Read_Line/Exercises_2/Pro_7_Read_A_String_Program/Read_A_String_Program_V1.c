

//* Read A String Program (Version 1).

/*
* Write a program to read a string (up to 50 characters) from the file "string_input.txt" and print it.

! Input:
! This program reads a string.

! Output:
! String read from file: This program reads a string.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, char line[50]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char myLine[50];

    // Call Functions.
    readFromFileFun(filePointer, myLine);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read A String Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("string_input.txt", "w");

    // Write in File.
    fprintf(filePoi, "This program reads a string.");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char line[50])
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("string_input.txt", "r");

    // Read From File.
    fscanf(filePoi, "%[^\n]", line);

    printf("String read from file: %s\n\n", line);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

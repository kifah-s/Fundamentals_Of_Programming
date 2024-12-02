

//* Read An Integer Program (Version 1).

/*
* Write a program to read an integer from the file "numbers.txt" and print it.

! Input:
! 12345

! Output:
! 12345
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
    printf("\n\nYou welcome in Read An Integer Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("numbers.txt", "w");

    // Write in File.
    fprintf(filePoi, "12345");

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
    filePoi = fopen("numbers.txt", "r");

    // Read From File.
    fscanf(filePoi, "%[^\n]", line);

    printf("Numbers: %s\n\n", line);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

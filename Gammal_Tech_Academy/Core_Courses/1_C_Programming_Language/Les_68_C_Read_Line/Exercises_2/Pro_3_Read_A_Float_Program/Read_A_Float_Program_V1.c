

//* Read A Float Program (Version 1).

/*
* Write a program to read a float from the file "float_data.txt" and print it.

! Input:
! 5.65

! Output:
! Float Number: 5.65
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, float myNum);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    float myNumber = 0;

    // Call Functions.
    readFromFileFun(filePointer, myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read A Float Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("float_data.txt", "w");

    // Write in File.
    fprintf(filePoi, "5.65");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, float myNum)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("float_data.txt", "r");

    // Read From File.
    fscanf(filePoi, "%f", &myNum);

    printf("Float Numbers: %0.2f\n\n", myNum);

    // Close File.
    fclose(filePoi);
}

//* End Function ..



//* Check Number Program (Version 1).

/*
* Write a program to read an integer from the file "positive_integer.txt" and check if it is positive.

! Input:
! -56

! Output:
! -56 is not a positive integer.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int myNum);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int myNumber;

    // Call Functions.
    readFromFileFun(filePointer, myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Check Number Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("positive_integer.txt", "w");

    // Write in File.
    fprintf(filePoi, "-56");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int myNum)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("positive_integer.txt", "r");

    // Read From File.
    fscanf(filePoi, "%d", &myNum);

    // Check Number.
    if (myNum > 0)
    {
        printf("%d is a positive integer.\n\n", myNum);
    }
    else
    {
        printf("%d is not a positive integer.\n\n", myNum);
    }

    // Close File.
    fclose(filePoi);
}
//* End Function ..

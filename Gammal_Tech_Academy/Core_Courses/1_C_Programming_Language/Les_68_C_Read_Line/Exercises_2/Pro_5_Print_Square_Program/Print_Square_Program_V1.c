

//* Print Square Program (Version 1).

/*
* Write a program to read an integer from the file "integer_input.txt" and print its square.

! Input:
! 5

! Output:
! Square of 5: 25
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
    int myNumber = 0;

    // Call Functions.
    readFromFileFun(filePointer, myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Square Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("integer_input.txt", "w");

    // Write in File.
    fprintf(filePoi, "5");

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
    filePoi = fopen("integer_input.txt", "r");

    // Read From File.
    fscanf(filePoi, "%d", &myNum);

    // Create Variables.
    int square = myNum * myNum;

    printf("Square of %d: %d\n\n", myNum, square);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

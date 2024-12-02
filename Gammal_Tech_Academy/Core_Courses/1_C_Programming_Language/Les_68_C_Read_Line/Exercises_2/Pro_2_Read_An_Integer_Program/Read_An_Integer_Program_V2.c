

//* Read An Integer Program (Version 2).

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
    printf("\n\nYou welcome in Read An Integer Program (Version 2) ..\n\n");
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
void readFromFileFun(FILE *filePoi, int myNum)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("numbers.txt", "r");

    // Read From File.
    fscanf(filePoi, "%d", &myNum);

    printf("Numbers: %d\n\n", myNum);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

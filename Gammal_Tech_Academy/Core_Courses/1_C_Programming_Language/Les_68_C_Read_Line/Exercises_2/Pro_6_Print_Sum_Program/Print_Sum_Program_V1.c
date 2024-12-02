

//* Print Sum Program (Version 1).

/*
* Write a program to read two integers from the file "integers.txt" and print their sum.

! Input:
! 5 6

! Output:
! Sum of 5 and 6: 11
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int firNum, int secNum);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int firstNumber = 0, secondNumber = 0;

    // Call Functions.
    readFromFileFun(filePointer, firstNumber, secondNumber);

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
    filePoi = fopen("integers.txt", "w");

    // Write in File.
    fprintf(filePoi, "5 6");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int firNum, int secNum)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("integers.txt", "r");

    // Read From File.
    fscanf(filePoi, "%d %d", &firNum, &secNum);

    // Create Variables.
    int sum = firNum + secNum;

    printf("Sum of %d and %d: %d\n\n", firNum, secNum ,sum);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

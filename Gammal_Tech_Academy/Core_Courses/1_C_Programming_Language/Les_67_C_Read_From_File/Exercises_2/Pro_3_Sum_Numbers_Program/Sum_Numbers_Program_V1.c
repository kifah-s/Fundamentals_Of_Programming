

//* Sum Numbers Program (Version 1).

/*
 * Write a program to find and print the sum of numbers stored in the file "data.txt",
 * where each line contains a single integer.
/*
! Input:
! 25
! 10
! 7
! 15
! 30

! Output:
! Sum of numbers: 87
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int num, int sum);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int myNumber = 0, sumNumbers = 0;

    // Call Functions.
    readFromFileFun(filePointer, myNumber, sumNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Numbers Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("data.txt", "w");

    // Write in File.
    fprintf(filePoi, "25\n10\n7\n15\n30\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int num, int sum)
{
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("data.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        // printf("%d ", num);
        sum = sum + num;
    }
    printf("Sum of numbers: %d\n\n", sum);

    // Close File.
    fclose(filePoi);
}

//* End Function ..

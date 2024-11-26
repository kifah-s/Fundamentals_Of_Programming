

//* Odd Squares Program (Version 1).

/*
 * Write a C program to create a file named "odd_squares.txt",
 * and write the squares of odd numbers from 1 to 9, each on a new line
/*
! Output:
! 1
! 9
! 25
! 49
! 81
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void createAndWriteInFileFun(FILE *filePoi);

int main()
{
    // Declare Variables.
    FILE *filePointer;

    // Call Functions.
    createAndWriteInFileFun(filePointer);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Odd Squares Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    // Create File.
    filePoi = fopen("odd_squares.txt", "w");

    // Write in File.
    for (int i = 1; i <= 9; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(filePoi, "%d\n", i * i);
        }
    }

    // Close File.
    fclose(filePoi);
}
//* End Function ..

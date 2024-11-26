

//* From 1 To 10 Program (Version 1).

/*
 * Create a program to generate a file named "numbers.txt" and write numbers from 1 to 10,
 * each on a new line
/*
! Output:
! 1
! 2
! 3
! 4
! 5
! 6
! 7
! 8
! 9
! 10
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
    printf("\n\nYou welcome in From 1 To 10 Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    filePoi = fopen("numbers.txt", "w");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(filePoi, "%d\n", i);
    }

    fclose(filePoi);
}
//* End Function ..

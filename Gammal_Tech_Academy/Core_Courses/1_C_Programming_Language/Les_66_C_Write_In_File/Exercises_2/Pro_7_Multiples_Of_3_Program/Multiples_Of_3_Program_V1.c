

//* Multiples Of 3 Program (Version 1).

/*
 * Write a program to create a file named "multiples_of_3.txt",
 * and write the multiples of 3 from 3 to 30, each on a new line
/*
! Output:
! 3
! 6
! 9
! 12
! 15
! 18
! 21
! 24
! 27
! 30
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
    printf("\n\nYou welcome in Multiples Of 3 Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    filePoi = fopen("multiples_of_3.txt", "w");

    for (int i = 3; i <= 30; i = i + 3)
    {
        fprintf(filePoi, "%d\n", i);
    }

    fclose(filePoi);
}
//* End Function ..

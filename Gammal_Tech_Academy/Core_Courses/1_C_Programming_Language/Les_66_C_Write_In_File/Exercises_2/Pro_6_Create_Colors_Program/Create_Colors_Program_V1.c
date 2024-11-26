

//* Create Colors Program (Version 1).

/*
 * Develop a C program to create a file named "colors.txt",
 * and write three colors ("Red", "Green", "Blue") each on a new line
/*
! Output:
! Red
! Green
! Blue
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
    printf("\n\nYou welcome in Create Colors Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    // Create File.
    filePoi = fopen("colors.txt", "w");

    // Write in File.
    fprintf(filePoi, "Red\n");
    fprintf(filePoi, "Green\n");
    fprintf(filePoi, "Blue\n");
    // fprintf(filePoi, "Red\nGreen\nBlue\n");

    // Close File.
    fclose(filePoi);
}
//* End Function ..

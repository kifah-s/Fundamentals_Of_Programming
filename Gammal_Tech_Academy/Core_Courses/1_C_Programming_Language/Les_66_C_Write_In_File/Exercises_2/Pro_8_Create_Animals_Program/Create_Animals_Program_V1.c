

//* Create Animals Program (Version 1).

/*
 * Develop a C program to generate a file named "animals.txt",
 * and write the names of three animals ("Lion", "Elephant", "Monkey") each on a new line
/*
! Output:
! Lion
! Elephant
! Monkey
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
    printf("\n\nYou welcome in Create Animals Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    // Create File.
    filePoi = fopen("animals.txt", "w");

    // Write in File.
    fprintf(filePoi, "Lion\n");
    fprintf(filePoi, "Elephant\n");
    fprintf(filePoi, "Monkey\n");
    // fprintf(filePoi, "Lion\nElephant\nMonkey\n");

    // Close File.
    fclose(filePoi);
}
//* End Function ..



//* Create Shapes Program (Version 1).

/*
 * Develop a C program to create a file named "shapes.txt",
 * and write the names of three geometric shapes ("Circle", "Triangle", "Square") each on a new line
/*
! Output:
! Circle
! Triangle
! Square
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
    printf("\n\nYou welcome in Create Shapes Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    // Create File.
    filePoi = fopen("shapes.txt", "w");

    // Write in File.
    fprintf(filePoi, "Circle\n");
    fprintf(filePoi, "Triangle\n");
    fprintf(filePoi, "Square\n");

    // Close File.
    fclose(filePoi);
}
//* End Function ..

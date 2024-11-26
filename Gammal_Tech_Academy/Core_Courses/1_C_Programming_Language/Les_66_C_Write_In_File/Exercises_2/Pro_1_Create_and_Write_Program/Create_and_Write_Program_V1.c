

//* Create and Write Program (Version 1).

/*
 * Write a program to create a file named "output.txt" and write "Hello, World!" to it
/*
! Output:
! Hello World
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
    printf("\n\nYou welcome in Create and Write Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    filePoi = fopen("output.txt", "w");
    fprintf(filePoi, "Hello World !!\n");
    fclose(filePoi);
}
//* End Function ..



//* Create Greetings Program (Version 1).

/*
 * Write a program to create a file named "greetings.txt" and write "Greetings from C Programming!"
/*
! Output:
! Greetings from C Programming!
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
    printf("\n\nYou welcome in Create Greetings Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    // Create File.
    filePoi = fopen("greetings.txt", "w");

    // Write in File.
    fprintf(filePoi, "Greetings from C Programming!\n");

    // Close File.
    fclose(filePoi);
}
//* End Function ..

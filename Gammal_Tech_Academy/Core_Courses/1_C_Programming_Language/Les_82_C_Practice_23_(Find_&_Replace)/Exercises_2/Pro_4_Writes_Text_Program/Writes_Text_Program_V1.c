

//* Writes Text Program (Version 1).

/*
* Create a program that creates a file named "example.txt" and writes the text "Hello, this is a sample text!" into it.

! Output:
! Hello, this is a sample text!
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(FILE *poiFile);

int main()
{
    // Declare Variables.
    FILE *pointerFile;

    // Call Functions.
    resultFun(pointerFile);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Writes Text Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile)
{
    poiFile = fopen("example.txt", "w");
    fprintf(poiFile, "Hello, this is a sample text!");
    fclose(poiFile);
}

// Result - Function.
void resultFun(FILE *poiFile)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(poiFile);
}
//* End Function ..

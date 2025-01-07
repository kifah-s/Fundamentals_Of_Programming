

//* Appends Text Program (Version 1).

/*
* Develop a program that appends the text "This is an appended text." to the end of the "example.txt" file.

! Output:
! This is append text.
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
    printf("\n\nYou welcome in Appends Text Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile)
{
    poiFile = fopen("example.txt", "a");
    fprintf(poiFile, "This is append text.\n");
    fclose(poiFile);
}

// Result - Function.
void resultFun(FILE *poiFile)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(poiFile);

    printf("\n\n");
}
//* End Function ..



//* Writes Integer Program (Version 1).

/*
* Create a program that writes an integer (e.g., 42) to a text file named "integer_data.txt".

! Output:
! 42
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(FILE *poiFile, int num);

int main()
{
    // Declare Variables.
    FILE *pointerFile;
    int number = 42;

    // Call Functions.
    resultFun(pointerFile, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Writes Integer Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile, int num)
{
    poiFile = fopen("integer_data.txt", "w");
    // fprintf(poiFile, "42\n");
    fprintf(poiFile, "%d\n", num);
    fclose(poiFile);
}

// Result - Function.
void resultFun(FILE *poiFile, int num)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(poiFile, num);

    printf("\n\n");
}
//* End Function ..

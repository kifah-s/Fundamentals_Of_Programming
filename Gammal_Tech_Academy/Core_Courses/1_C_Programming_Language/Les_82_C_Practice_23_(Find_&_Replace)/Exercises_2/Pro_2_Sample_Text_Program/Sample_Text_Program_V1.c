

//* Sample Text Program (Version 1).

/*
* Write a program to open and read the content of a text file named "sample.txt" and print it to the console.

! Input:
! This is a sample text file.

! Output:
! This is a sample text file.
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
    printf("\n\nYou welcome in Sample Text Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile)
{
    poiFile = fopen("sample.txt", "w");
    fprintf(poiFile, "Write a program to open and read the content of a text file named \"sample.txt\" and print it to the console.");
    fclose(poiFile);
}

// Print Sample Text - Function.
void printSampleTextFun(FILE *poiFile)
{
    char w;
    poiFile = fopen("sample.txt", "r");
    while (fscanf(poiFile, "%c", &w) != EOF)
    {
        printf("%c", w);
    }

    fclose(poiFile);
}

// Result - Function.
void resultFun(FILE *poiFile)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(poiFile);
    printSampleTextFun(poiFile);
    printf("\n\n");
}
//* End Function ..

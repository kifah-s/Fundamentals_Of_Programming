

//* Reads Content Program (Version 1).

/*
* Write a program that reads the content of the "example.txt" file and prints it to the console.

! Input:
! Write a program that reads the content.

! Output:
! File Content: Write a program that reads the content.
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
    printf("\n\nYou welcome in Reads Content Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile)
{
    poiFile = fopen("example.txt", "w");
    fprintf(poiFile, "Write a program that reads the content.");
    fclose(poiFile);
}

// Reads Content - Function.
void readsContentFun(FILE *poiFile)
{
    char w;
    poiFile = fopen("example.txt", "r");
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
    readsContentFun(poiFile);
    printf("\n\n");
}
//* End Function ..

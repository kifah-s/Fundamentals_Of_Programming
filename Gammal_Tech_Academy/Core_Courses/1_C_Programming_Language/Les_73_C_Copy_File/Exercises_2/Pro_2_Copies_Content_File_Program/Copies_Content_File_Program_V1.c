

//* Copies Content File Program (Version 1).

/*
* Create a program that copies the content of one file to another file.

! Input:
! This is the source file content.

! Output:
! This is the source file content.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *fileSourcePoi, FILE *fileCopyPoi, char ch);

int main()
{
    // Declare Variables.
    FILE *fileSourcePointer, *fileCopyPointer;
    char ch;

    // Call Functions.
    resultFun(fileSourcePointer, fileCopyPointer, ch);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Copies Content File Program (Version 1) ..\n\n");
}

// Create And Write In Source File - Function.
void createAndWriteInSourceFileFun(FILE *fileSourcePoi)
{
    // Create File.
    fileSourcePoi = fopen("source-file.txt", "w");

    // Write In File.
    fprintf(fileSourcePoi, "This is the source file content.");

    // Close File.
    fclose(fileSourcePoi);
}

// Create New File And Copy Characters - Function.
void createNewFileAndCopyCharactersFun(FILE *fileSourcePoi, FILE *fileCopyPoi, char ch)
{
    // Open Files.
    fileSourcePoi = fopen("source-file.txt", "r");
    fileCopyPoi = fopen("copy-file.txt", "w");

    // Copy Characters.
    while (fscanf(fileSourcePoi, "%c", &ch) != EOF)
    {
        fprintf(fileCopyPoi, "%c", ch);
    }

    // Close Files.
    fclose(fileSourcePoi);
    fclose(fileCopyPoi);
}

// Result - Function.
void resultFun(FILE *fileSourcePoi, FILE *fileCopyPoi, char ch)
{
    printWelcomeMessageFun();
    createAndWriteInSourceFileFun(fileSourcePoi);
    createNewFileAndCopyCharactersFun(fileSourcePoi, fileCopyPoi, ch);
}
//* End Function ..



//* On New Line Program (Version 1).

/*
* Write a program that reads a sentence from a file and prints each word on a new line.

! Input:
! This is the simple sentence.

! Output:
! This
! is
! the
! simple
! sentence.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, char w[25]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char word[25];

    // Call Functions.
    resultFun(filePointer, word);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in On New Line Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("file.txt", "w");

    // Write In File.
    fprintf(filePoi, "This is the simple sentence.");

    // Close File.
    fclose(filePoi);
}

// Print Words In New Line - Function.
void printWordsInNewLineFun(FILE *filePoi, char w[25])
{
    // Open Files.
    filePoi = fopen("file.txt", "r");

    // Print Words.
    while (fscanf(filePoi, "%s", w) != EOF)
    {
        printf("%s\n", w);
    }

    // Close Files.
    fclose(filePoi);
}

// Result - Function.
void resultFun(FILE *filePoi, char w[25])
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    printWordsInNewLineFun(filePoi, w);

    printf("\n\n");
}
//* End Function ..

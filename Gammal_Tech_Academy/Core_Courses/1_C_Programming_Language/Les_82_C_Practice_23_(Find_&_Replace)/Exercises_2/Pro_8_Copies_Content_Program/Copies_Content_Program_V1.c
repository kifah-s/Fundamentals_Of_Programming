

//* Copies Content Program (Version 1).

/*
* Write a program that copies the content of the text file "source_lines.txt",
* to a new file named "destination_lines.txt" line by line.

! Input:
! program that copies the content of the text
! file "source_lines.txt"
! to a new
! file named "destination_lines.txt" line by line.

! Output:
! program that copies the content of the text
! file "source_lines.txt"
! to a new
! file named "destination_lines.txt" line by line.

! Text file content copied line by line.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(FILE *poiFile_1, FILE *poiFile_2);

int main()
{
    // Declare Variables.
    FILE *pointerFile_1, *pointerFile_2;

    // Call Functions.
    resultFun(pointerFile_1, pointerFile_2);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Copies Content Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile_1)
{
    poiFile_1 = fopen("source_lines.txt", "w");
    fprintf(poiFile_1, "program that copies the content of the text\nfile \"source_lines.txt\" \nto a new\nfile named \"destination_lines.txt\" line by line.");
    fclose(poiFile_1);
}

// Copies Content - Function.
void copiesContentFun(FILE *poiFile_1, FILE *poiFile_2)
{
    char w;
    poiFile_1 = fopen("source_lines.txt", "r");
    poiFile_2 = fopen("destination_lines.txt", "w");

    while (fscanf(poiFile_1, "%c", &w) != EOF)
    {
        fprintf(poiFile_2, "%c", w);
    }

    fclose(poiFile_1);
    fclose(poiFile_2);
}

// Result - Function.
void resultFun(FILE *poiFile_1, FILE *poiFile_2)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(poiFile_1);
    copiesContentFun(poiFile_1, poiFile_2);
    printf("Text file content copied line by line\n");

    printf("\n\n");
}
//* End Function ..

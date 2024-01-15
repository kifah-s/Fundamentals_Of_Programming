

/* >>> Letter S Program ( Version 1 ) <<< */

/* >>> A program opens a new file. It prints the letter S using the \* symbol inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printLetterSFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printLetterSFun(filePointer);

    return 0;
}

// Functions ..

// Print Letter S / Function.
void printLetterSFun(FILE *filePointer)
{
    filePointer = fopen("Letter_S_V1.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Letter S Program ( Version 1 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "***************\n");                                        // Write in file.
    fprintf(filePointer, "*\n");                                                      // Write in file.
    fprintf(filePointer, "*\n");                                                      // Write in file.
    fprintf(filePointer, "*\n");                                                      // Write in file.
    fprintf(filePointer, "*\n");                                                      // Write in file.
    fprintf(filePointer, "*\n");                                                      // Write in file.
    fprintf(filePointer, "***************\n");                                        // Write in file.
    fprintf(filePointer, "              *\n");                                        // Write in file.
    fprintf(filePointer, "              *\n");                                        // Write in file.
    fprintf(filePointer, "              *\n");                                        // Write in file.
    fprintf(filePointer, "              *\n");                                        // Write in file.
    fprintf(filePointer, "              *\n");                                        // Write in file.
    fprintf(filePointer, "***************\n");                                        // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}
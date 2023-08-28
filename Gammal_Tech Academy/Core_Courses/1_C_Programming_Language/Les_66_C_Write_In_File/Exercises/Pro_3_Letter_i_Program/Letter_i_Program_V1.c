

/* >>> Letter i Program ( Version 1 ) <<< */

/* >>> A program opens a new file, print an i-shape using the \* symbol inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printLetteriFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printLetteriFun(filePointer);

    return 0;
}

// Functions ..

// Print Letter i / Function.
void printLetteriFun(FILE *filePointer)
{
    filePointer = fopen("Letter_i_V1.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Letter i Program ( Version 1 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "*\n\n");                                                     // Write in file.
    fprintf(filePointer, "*\n");                                                     // Write in file.
    fprintf(filePointer, "*\n");                                                     // Write in file.
    fprintf(filePointer, "*\n");                                                     // Write in file.
    fprintf(filePointer, "*\n");                                                     // Write in file.
    fprintf(filePointer, "*\n");                                                     // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}
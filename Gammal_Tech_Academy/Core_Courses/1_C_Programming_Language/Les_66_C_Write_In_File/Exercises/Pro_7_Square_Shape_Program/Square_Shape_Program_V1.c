

/* >>> Square Shape Program ( Version 1 ) <<< */

/* >>> A program opens a new file, print a square shape using the \* symbol inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printSquareShapeFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printSquareShapeFun(filePointer);

    return 0;
}

// Functions ..
// Print Square Shape / Function.
void printSquareShapeFun(FILE *filePointer)
{
    filePointer = fopen("Square_Shape_V1.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Square Shape Program ( Version 1 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "***************\n");                                        // Write in file.
    fprintf(filePointer, "*             *\n");                                        // Write in file.
    fprintf(filePointer, "*             *\n");                                        // Write in file.
    fprintf(filePointer, "*             *\n");                                        // Write in file.
    fprintf(filePointer, "*             *\n");                                        // Write in file.
    fprintf(filePointer, "*             *\n");                                        // Write in file.
    fprintf(filePointer, "***************\n");                                        // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}
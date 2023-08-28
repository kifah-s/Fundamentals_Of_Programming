

/* >>> Square Shape Program ( Version 3 ) <<< */

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
    filePointer = fopen("Square_Shape_V3.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Square Shape Program ( Version 3 ) ..\n\n"); // Write in file.

    for (int i = 0; i < 7; i++)
    {
        fprintf(filePointer,"\n");
        for (int i = 0; i < 20; i++)
        {
            fprintf(filePointer,"*");
        }
    }
    fprintf(filePointer,"\n\n");
    fprintf(filePointer, "\n");

    fclose(filePointer); // Close the file after writing is finished
}

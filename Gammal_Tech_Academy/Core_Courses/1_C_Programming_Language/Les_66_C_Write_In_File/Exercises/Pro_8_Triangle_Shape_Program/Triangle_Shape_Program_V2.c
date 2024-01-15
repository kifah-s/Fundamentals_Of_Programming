

/* >>> Triangle Shape Program ( Version 2 ) <<< */

/* >>> A program opens a new file, print a Triangle shape using the \* symbol inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printTriangleShapeFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printTriangleShapeFun(filePointer);

    return 0;
}

// Functions ..
// Print Triangle Shape / Function.
void printTriangleShapeFun(FILE *filePointer)
{
    filePointer = fopen("Triangle_Shape_V2.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Triangle Shape Program ( Version 2 ) ..\n\n"); // Write in file.

    int rows, star, space, starNum = 6, rowsNum = starNum;

    for (rows = 1; rows <= rowsNum; rows++)
    {
        for (space = 1; space <= starNum; space++)
        {
            fprintf(filePointer, " ");
        }
        for (star = 1; star <= rows; star++)
        {
            fprintf(filePointer, "*");
            fprintf(filePointer, " ");
        }
        fprintf(filePointer, "\n");
        starNum -= 1;
    }

    fclose(filePointer); // Close the file after writing is finished
}
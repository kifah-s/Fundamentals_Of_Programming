

/* >>> Triangle Shape Program ( Version 2 ) <<< */

/* >>> A program opens a new file, print a Triangle shape using the \* symbol inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// void printTriangleShapeFun(FILE *filePointer);

int main()
{
    /* FILE *filePointer; // pointer to a file
    printTriangleShapeFun(filePointer); */
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("                       ");
        for (int j = 0; j < i; j++)
        {
            printf("*");
            for (int k = j; k <= j; k++)
            {
                printf("*");
            }
        }
    }
    printf("\n\n");

    return 0;
}
/*
// Functions ..
// Print Triangle Shape / Function.
void printTriangleShapeFun(FILE *filePointer)
{
    filePointer = fopen("Triangle_Shape_V2.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Triangle Shape Program ( Version 2 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "              *\n");                                              // Write in file.
    fprintf(filePointer, "             * *\n");                                             // Write in file.
    fprintf(filePointer, "            *   *\n");                                            // Write in file.
    fprintf(filePointer, "           *     *\n");                                           // Write in file.
    fprintf(filePointer, "          *       *\n");                                          // Write in file.
    fprintf(filePointer, "         *         *\n");                                         // Write in file.
    fprintf(filePointer, "        *           *\n");                                        // Write in file.
    fprintf(filePointer, "       *             *\n");                                       // Write in file.
    fprintf(filePointer, "      *****************\n");                                      // Write in file.

    fclose(filePointer); // Close the file after writing is finished
} */
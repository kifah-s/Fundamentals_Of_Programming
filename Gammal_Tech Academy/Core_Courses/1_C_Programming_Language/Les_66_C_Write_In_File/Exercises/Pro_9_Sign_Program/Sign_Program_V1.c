

/* >>> Sign √ Program ( Version 1 ) <<< */

/* >>> A program opens a new file, in two dimensions it prints the sign √ using the \* symbol inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printSignFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printSignFun(filePointer);

    return 0;
}

// Functions ..
// Print Sign √ / Function.
void printSignFun(FILE *filePointer)
{
    filePointer = fopen("Sign_V1.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Sign √ Program ( Version 1 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "                                  *\n");                 // Write in file.
    fprintf(filePointer, "                                 *\n");                   // Write in file.
    fprintf(filePointer, "                                *\n");                    // Write in file.
    fprintf(filePointer, "                               *\n");                     // Write in file.
    fprintf(filePointer, "                              *\n");                      // Write in file.
    fprintf(filePointer, "                             *\n");                       // Write in file.
    fprintf(filePointer, "                    *       *\n");                        // Write in file.
    fprintf(filePointer, "                     *     *\n");                         // Write in file.
    fprintf(filePointer, "                      *   *\n");                          // Write in file.
    fprintf(filePointer, "                       * *\n");                           // Write in file.
    fprintf(filePointer, "                        *\n");                            // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}
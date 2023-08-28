

/* >>> Hello Program ( Version 2 ) <<< */

/* >>> A program that opens a new file print the word "Hello" into the file using 5 printf commands. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printHelloFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printHelloFun(filePointer);

    return 0;
}

// Functions ..

// Print Hello / Function.
void printHelloFun(FILE *filePointer)
{
    filePointer = fopen("Hello_V2.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Hello Program ( Version 2 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "Hello\n");                                               // Write in file.
    fprintf(filePointer, "Hello\n");                                               // Write in file.
    fprintf(filePointer, "Hello\n");                                               // Write in file.
    fprintf(filePointer, "Hello\n");                                               // Write in file.
    fprintf(filePointer, "Hello\n");                                               // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}
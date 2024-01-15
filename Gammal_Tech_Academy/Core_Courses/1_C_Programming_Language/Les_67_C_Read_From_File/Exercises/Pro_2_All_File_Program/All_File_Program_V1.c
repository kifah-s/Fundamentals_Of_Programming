

/* >>> All File Program ( Version 1 ) <<< */

/* >>> A program that opens a file and reads all the words in it and prints it on the screen. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void writeInFileFun(FILE *filePointer);
void readFromFileFun(FILE *filePointer, char allFile);

int main()
{
    FILE *filePointer; // pointer to a file
    writeInFileFun(filePointer);

    char allFile;
    readFromFileFun(filePointer, allFile);

    return 0;
}

// Functions ..
// Write in file / Function.
void writeInFileFun(FILE *filePointer)
{
    filePointer = fopen("All_File_V1.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in All File Program ( Version 1 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "My name \' Kifah Saloum \'");                               // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}

// Read from file / Function.
void readFromFileFun(FILE *filePointer, char allFile)
{
    filePointer = fopen("All_File_V1.txt", "r");                                // Open the file for read.
    while (fscanf(filePointer, "%c", &allFile) != EOF /* EOF : End Of File. */) // Read All File,
    {
        printf("%c", allFile);
    }
    printf("\n\n");

    fclose(filePointer); // Close the file after reading is finished
}
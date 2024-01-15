

/* >>> Student Name Program ( Version 2 ) <<< */

/* >>> A program opens a new file, print the name of the student on the screen inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void printStudentNameFun(FILE *filePointer);

int main()
{
    FILE *filePointer; // pointer to a file
    printStudentNameFun(filePointer);

    return 0;
}

// Functions ..

// Print Student Name / Function.
void printStudentNameFun(FILE *filePointer)
{

    filePointer = fopen("Student_Name_V2.txt", "w"); // Open the file for writing, if the file is not found it will be created.

    fprintf(filePointer, "\n\nYou welcome in Student Name Program ( Version 2 ) ..\n\n"); // Write in file.
    fprintf(filePointer, "My name \' Kifah Saloum \'");                                   // Write in file.

    fclose(filePointer); // Close the file after writing is finished
}
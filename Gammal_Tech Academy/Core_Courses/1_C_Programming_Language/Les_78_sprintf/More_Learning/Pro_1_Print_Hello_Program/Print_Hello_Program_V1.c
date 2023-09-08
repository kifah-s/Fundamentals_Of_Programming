

/* >>> Print Hello Program ( Version 1 ) <<< */

/* >>> A program that prints the word "hello" on the screen and opens a new file and prints the word "hello" into it. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void printHelloFun(FILE *newFile);


int main()
{
    welcomeMassageFun();
    
    FILE *newFile;
    printHelloFun(newFile);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Hello Program ( Version 1 ) ..\n\n");
}

// Create new file and print hello in file and on terminal / Function.
void printHelloFun(FILE *newFile)
{
    newFile = fopen("new_file.txt", "w");
    fprintf(newFile, "Hello"); // Print in "file".
    fclose(newFile);

    printf("Hello\n\n"); // Print in "terminal".
}
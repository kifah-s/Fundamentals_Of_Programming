

/* >>> Print Hello Program ( Version 2 ) <<< */

/* >>> A program that prints the word "hello" on the screen and opens a new file and prints the word "hello" into it. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void printHelloFun(FILE *newFile, char arr[50]);


int main()
{
    welcomeMassageFun();
    
    FILE *newFile;
    char arr[50];
    printHelloFun(newFile, arr);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Hello Program ( Version 2 ) ..\n\n");
}

// Create new file and print hello in file and on terminal and in string / Function.
void printHelloFun(FILE *newFile, char arr[50])
{
    newFile = fopen("new_file.txt", "w");
    fprintf(newFile, "Hello"); // Print in "file".
    fclose(newFile);

    printf("Hello\n\n"); // Print in "terminal".

    sprintf(arr, "Hello"); // Print in "string".
    printf("%s\n\n\n", arr);
}
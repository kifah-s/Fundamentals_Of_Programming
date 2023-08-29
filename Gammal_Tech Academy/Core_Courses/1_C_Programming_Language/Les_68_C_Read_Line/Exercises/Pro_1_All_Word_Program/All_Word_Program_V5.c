

/* >>> All Words Program ( Version 5 ) <<< */

/* >>> A program that asks the user to write a sentence with a maximum of 400 characters and prints all the words that the user wrote (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void getStringFun(char string[400]);
void writeInFileFun(char string[400], FILE *fileForWrite);
void readFromFileFun(FILE *readFromFile, char read[400]);

int main()
{
    welcomeMassageFun();

    char string[400], read[400];
    getStringFun(string);

    FILE *fileForWrite, *readFromFile;
    writeInFileFun(string, fileForWrite);
    readFromFileFun(readFromFile, read);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in All Words Program ( Version 5 ) ..\n\n");
}

// Get string from user / Function.
void getStringFun(char string[400])
{
    printf("Please enter a sentence: ");
    scanf("%[^\n]", string);
}

// Write in file / Function.
void writeInFileFun(char string[400], FILE *fileForWrite)
{
    fileForWrite = fopen("File_For_Write_V5.txt", "w");
    fprintf(fileForWrite, "%s", string); // printing a string as a string in file.
    fclose(fileForWrite);
}

// Read from file / Function.
void readFromFileFun(FILE *readFromFile, char read[400])
{
    readFromFile = fopen("File_For_Write_V5.txt", "r");
    fscanf(readFromFile, "%[^\n]", read);
    fclose(readFromFile);
    
    printf("\n%s\n\n", read);
}

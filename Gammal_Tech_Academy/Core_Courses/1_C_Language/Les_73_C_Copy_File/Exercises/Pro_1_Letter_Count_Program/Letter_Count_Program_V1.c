

/* >>> Letter Count Program ( Version 1 ) <<< */

/* >>> A program that counts the number of letters in a file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void createFileFun(FILE *createFile);
void letterCount(FILE *createFile, char x);

int main()
{
    welcomeMassageFun();

    FILE *createFile;
    createFileFun(createFile);

    char x;
    letterCount(createFile, x);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Letter Count Program ( Version 1 ) ..\n\n");
}

// Create file and write in it / Function.
void createFileFun(FILE *createFile)
{
    createFile = fopen("file.txt", "w");
    fprintf(createFile, "Hello World, Hello kifah");
    fclose(createFile);
}

// Letter count in file / Function.
void letterCount(FILE *createFile, char x)
{
    int counter = 0;
    createFile = fopen("file.txt", "r");
    while (fscanf(createFile, "%c", &x) != EOF)
    {
        if (x != ' ' && x != '\n')
        {
            counter++;
        }
    }
    fclose(createFile);
    printf("Letter count in file is: %d\n\n", counter);
}
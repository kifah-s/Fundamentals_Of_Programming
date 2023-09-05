

/* >>> Copy Of File Program ( Version 2 ) <<< */

/* >>> A program that copy a file with its content. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void createFileFun(FILE *createFile);
void createCopyFile(FILE *createFile, FILE *fileCopy, char x);
// void letterCount(FILE *createFile, char x);

int main()
{
    welcomeMassageFun();

    FILE *createFile, *fileCopy;
    char x;

    createFileFun(createFile);

    createCopyFile(createFile, fileCopy, x);

    // letterCount(createFile, x);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Copy Of File Program ( Version 2 ) ..\n\n");
}

// Create file and write in it / Function.
void createFileFun(FILE *createFile)
{
    createFile = fopen("file.txt", "w");
    fprintf(createFile, "Hello World, Hello kifah");
    fclose(createFile);
}

// Creat copy from file / Function.
void createCopyFile(FILE *createFile, FILE *fileCopy, char x)
{
    int counter = 0;
    createFile = fopen("file.txt", "r");
    fileCopy = fopen("file_copy.txt", "w");
    while (fscanf(createFile, "%c", &x) != EOF)
    {
        fprintf(fileCopy, "%c", x);
        if (x != ' ' && x != '\n')
        {
            counter++;
        }
    }
    fclose(createFile);
    fclose(fileCopy);
    printf("Letter count in file is: %d\n\n", counter);
}

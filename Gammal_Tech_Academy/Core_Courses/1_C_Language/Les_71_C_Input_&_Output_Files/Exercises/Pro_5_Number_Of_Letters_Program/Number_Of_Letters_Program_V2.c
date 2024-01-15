

/* >>> Number Of Letters Program ( Version 1 ) <<< */

/* >>> A program that reads a name from a file and prints the number of characters for the name into a second file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getNameFun(char name[25]);

char creatFile1ForWriteFun(char name[25], FILE *file1ForWrite);
char readFromFile1ForWriteFun(char nameInFile1[25], FILE *file1ForWrite);
char creatFile2ForReadFun(char nameInFile1[25], FILE *file2ForWrite);

int main()
{
    welcomeMassageFun();

    char name[25];
    getNameFun(name);
    // printf("\n%s\n\n", name); // for just check.

    FILE *file1ForWrite;
    creatFile1ForWriteFun(name, file1ForWrite);

    char nameInFile1[25];
    readFromFile1ForWriteFun(nameInFile1, file1ForWrite);
    // printf("\n%s\n\n", nameInFile1); // for just check.

    FILE *file2ForWrite;
    creatFile2ForReadFun(nameInFile1, file2ForWrite);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Of Letters Program ( Version 1 ) ..\n\n");
}

// Get Name / Function.
char getNameFun(char name[25])
{
    printf("Please enter a Name: ");
    scanf("%[^\n]", name);
}

// Creat file 1 for write / function.
char creatFile1ForWriteFun(char name[25], FILE *file1ForWrite)
{
    file1ForWrite = fopen("file_1_for_write_V1.txt", "w");
    fprintf(file1ForWrite, "%s", name);
    fclose(file1ForWrite);
}

// Read from file 1 for write / function.
char readFromFile1ForWriteFun(char nameInFile1[25], FILE *file1ForWrite)
{
    file1ForWrite = fopen("file_1_for_write_V1.txt", "r");
    fscanf(file1ForWrite, "%[^\n]", nameInFile1);
    fclose(file1ForWrite);
}

// Creat file 2 for read / function.
char creatFile2ForReadFun(char nameInFile1[25], FILE *file2ForWrite)
{
    file2ForWrite = fopen("file_2_for_write_V1.txt", "w");
    // int lengthName = strlen(nameInFile1);
    int counterLetter = 0;
    for (int i = 0; i < nameInFile1[i] /* Or: i < lengthName  */; i++)
    {
        counterLetter++;
    }
    fprintf(file2ForWrite, "Number Letters: %d\n", counterLetter);
    fclose(file2ForWrite);
}


/* >>> Multiplication Table Program ( Version 1 ) <<< */

/* >>> A program that reads a number and prints the multiplication table of this number from 1:10. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
int creatFile1ForWriteFun(int number, FILE *file1ForWrite);
int readFromFile1ForWriteFun(int number, FILE *file1ForWrite);
int creatFile2ForReadFun(int numberInFile1, FILE *file2ForWrite);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = getNumberFun(number);

    FILE *file1ForWrite;
    creatFile1ForWriteFun(number, file1ForWrite);

    int numberInFile1 = 0;
    numberInFile1 = readFromFile1ForWriteFun(numberInFile1, file1ForWrite);
    // printf("\n%d\n\n", numberInfile1); // for just check.

    FILE *file2ForWrite;
    creatFile2ForReadFun(numberInFile1, file2ForWrite);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Multiplication Table Program ( Version 1 ) ..\n\n");
}

// Get Number / Function.
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Creat file 1 for write / function.
int creatFile1ForWriteFun(int number, FILE *file1ForWrite)
{
    file1ForWrite = fopen("file_1_for_write_V1.txt", "w");
    fprintf(file1ForWrite, "%d", number);
    fclose(file1ForWrite);
}

// Read from file 1 for write / function.
int readFromFile1ForWriteFun(int numberInFile1, FILE *file1ForWrite)
{
    file1ForWrite = fopen("file_1_for_write_V1.txt", "r");
    fscanf(file1ForWrite, "%d", &numberInFile1);
    fclose(file1ForWrite);

    return numberInFile1;
}

// Creat file 2 for read / function.
int creatFile2ForReadFun(int numberInFile1, FILE *file2ForWrite)
{
    file2ForWrite = fopen("file_2_for_write_V1.txt", "w");
    fprintf(file2ForWrite, "Multiplication Table for number %d: \n", numberInFile1);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(file2ForWrite, "%d * %d = %d\n", i, numberInFile1, numberInFile1 * i);
    }
    fclose(file2ForWrite);
}


/* >>> Positive Numbers Program ( Version 2 ) <<< */

/* >>> A program that asks the person to enter two numbers that express the size of the 2D array, records the numbers that he will write, prints only the positive numbers from the one who entered them, and prints their number. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getRowsFun();
int getColumnsFun();
void getNumbersFun(int array[10][10], int rows, int columns);
void printNumberFun(int array[10][10], int rows, int columns);

int main()
{
    welcomeMassageFun();

    int rows = getRowsFun();
    int columns = getColumnsFun();

    int array[10][10];
    getNumbersFun(array, rows, columns);
    printNumberFun(array, rows, columns);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Numbers Program ( Version 2 ) ..\n\n");
}

// Get rows function;
int getRowsFun()
{
    int rows = 0;
    printf("Please enter number of rows : \n");
    scanf("%d", &rows);

    return rows;
}

// Get columns function;
int getColumnsFun()
{
    int columns = 0;
    printf("Please enter number of columns : \n");
    scanf("%d", &columns);

    return columns;
}

// Get numbers function;
void getNumbersFun(int array[10][10], int rows, int columns)
{
    printf("\nPlease enter %d numbers : \n", rows * columns);

    int counter = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Number %d : ", counter + 1);
            scanf("%d", &array[i][j]);
            counter++;
        }
    }
    printf("\n");
}

// Print number function;
void printNumberFun(int array[10][10], int rows, int columns)
{
    int positiveNumberCounter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (array[i][j] > 0)
            {
                printf("%d  ", array[i][j]);
                positiveNumberCounter++;
            }
        }
        printf("\n");
    }
    printf("\nThe number of positive numbers = %d", positiveNumberCounter);
    printf("\n\n\n");
}

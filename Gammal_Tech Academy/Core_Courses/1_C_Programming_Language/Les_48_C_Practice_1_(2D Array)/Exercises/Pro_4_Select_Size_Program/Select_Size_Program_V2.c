

/* >>> Select Size Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two numbers that express the size of the 2D array and record the numbers that he will write and print on the other and print their sum. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getRowsFun();
int getColumnsFun();
int getNumberFun(int array[10][10], int rows, int columns);
int printNumbersFun(int array[10][10], int rows, int columns);

int main()
{
    welcomeMassageFun();

    int rows = getRowsFun();
    int columns = getColumnsFun();

    int array[10][10];
    getNumberFun(array, rows, columns);
    printNumbersFun(array, rows, columns);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Select Size Program ( Version 2 ) ..\n\n");
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

// Get number function;
int getNumberFun(int array[10][10], int rows, int columns)
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
int printNumbersFun(int array[10][10], int rows, int columns)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d  ", array[i][j]);
            sum = sum + array[i][j];
        }
        printf("\n");
    }
    printf("\nSum all numbers = %d", sum);
    printf("\n\n\n");
}

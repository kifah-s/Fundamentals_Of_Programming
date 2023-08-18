

/* >>> Smaller Number Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers that express the size of the 2D array, after that he enters random numbers in which he dictates the array and prints the smallest number in these numbers. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getRowsOfArrayFun();
int getColumnsOfArrayFun();
int getElementsOfArrayFun(int array[10][10], int rows, int columns);
int printSmallerNumberOfArrayFun(int array[10][10], int rows, int columns);

int main()
{
    welcomeMassageFun();

    int rows = getRowsOfArrayFun();
    int columns = getColumnsOfArrayFun();

    int array[10][10];
    getElementsOfArrayFun(array, rows, columns);
    printSmallerNumberOfArrayFun(array, rows, columns);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Smaller Number Program ( Version 1 ) ..\n\n");
}

// Get rows of array function;
int getRowsOfArrayFun()
{
    int rows = 0;
    printf("Please enter rows of array : ");
    scanf("%d", &rows);

    return rows;
}

// Get columns of array function;
int getColumnsOfArrayFun()
{
    int columns = 0;
    printf("Please enter columns of array : ");
    scanf("%d", &columns);

    return columns;
}

// Get elements of array function;
int getElementsOfArrayFun(int array[10][10], int rows, int columns)
{
    printf("\nPlease enter %d number : \n", rows * columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
}

// Print smaller number of array function;
int printSmallerNumberOfArrayFun(int array[10][10], int rows, int columns)
{
    int smallerNumber = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (array[i][j] < smallerNumber)
            {
                smallerNumber = array[i][j];
            }
        }
    }
    printf("\nSmaller number is : %d\n\n", smallerNumber);
}
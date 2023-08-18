

/* >>> Largest Number Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers that express the size of the 2D array, then enter random numbers in which the array is dictated and the largest number is printed in these numbers. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getRowsOfArrayFun();
int getColumnsOfArrayFun();
int getElementsOfArrayFun(int array[10][10], int rows, int columns);
int printLargestNumberOfArrayFun(int array[10][10], int rows, int columns);

int main()
{
    welcomeMassageFun();

    int rows = getRowsOfArrayFun();
    int columns = getColumnsOfArrayFun();

    int array[10][10];
    getElementsOfArrayFun(array, rows, columns);
    printLargestNumberOfArrayFun(array, rows, columns);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Number Program ( Version 1 ) ..\n\n");
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

// Print largest number of array function;
int printLargestNumberOfArrayFun(int array[10][10], int rows, int columns)
{
    // int largesNumber = 0;
    int largesNumber = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (array[i][j] > largesNumber)
            {
                largesNumber = array[i][j];
            }
        }
    }
    printf("\nLargest number is : %d\n\n", largesNumber);
}
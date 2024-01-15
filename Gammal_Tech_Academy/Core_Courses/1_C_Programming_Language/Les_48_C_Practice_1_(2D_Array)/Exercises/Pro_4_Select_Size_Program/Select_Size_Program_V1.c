

/* >>> Select Size Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers that express the size of the 2D array and record the numbers that he will write and print on the other and print their sum. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int arrayFun();

int main()
{
    welcomeMassageFun();

    arrayFun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Select Size Program ( Version 1 ) ..\n\n");
}

// Array function;
int arrayFun()
{
    // Get dimensions array;
    int rows = 0, columns = 0;
    printf("Please enter number of rows : \n");
    scanf("%d", &rows);

    printf("Please enter number of columns : \n");
    scanf("%d", &columns);

    // Get number;
    printf("\nPlease enter %d numbers : \n", rows * columns);

    int array[rows][columns], counter = 0;

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

    // Print number;
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

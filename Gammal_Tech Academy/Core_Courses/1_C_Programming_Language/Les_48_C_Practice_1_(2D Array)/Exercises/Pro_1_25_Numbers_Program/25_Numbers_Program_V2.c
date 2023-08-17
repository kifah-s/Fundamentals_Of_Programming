

/* >>> 25 Numbers Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter 25 numbers after some and print them in the other every 5 numbers in a line and their sum prints it (using the 2D array). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumberFun(int array[5][5]);
void printNumberFun(int array[5][5]);

int main()
{
    welcomeMassageFun();

    int array[5][5];

    getNumberFun(array);

    printNumberFun(array);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 25 Numbers Program ( Version 2 ) ..\n\n");
}

// Get number function;
int getNumberFun(int array[5][5])
{
    // Get number;
    printf("Please enter 25 numbers : \n");

    int counter = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Number %d : ", counter + 1);
            scanf("%d", &array[i][j]);
            counter++;
        }
    }
    printf("\n");
}
// print number function;
void printNumberFun(int array[5][5])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", array[i][j]);
            sum = sum + array[i][j];
        }
        printf("\n");
    }
    printf("\nSum all numbers is = %d", sum);
    printf("\n\n\n");
}
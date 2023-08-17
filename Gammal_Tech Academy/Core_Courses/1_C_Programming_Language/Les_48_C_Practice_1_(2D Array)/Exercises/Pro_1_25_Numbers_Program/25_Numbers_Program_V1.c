

/* >>> 25 Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter 25 numbers after some and print them in the other every 5 numbers in a line and their sum prints it (using the 2D array). <<< */

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
    printf("\n\nYou welcome in 25 Numbers Program ( Version 1 ) ..\n\n");
}

// Array function;
int arrayFun()
{
    // Get number;
    printf("Please enter 25 numbers : \n");

    int array[5][5], counter = 0, sum = 0;

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

    // Print number;
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

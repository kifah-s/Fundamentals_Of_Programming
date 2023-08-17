

/* >>> Negative Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter 25 different numbers and print negative numbers to it. <<< */

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
    printf("\n\nYou welcome in Negative Numbers Program ( Version 1 ) ..\n\n");
}

// Array function;
int arrayFun()
{
    // Get number;
    printf("Please enter 25 numbers : \n");

    int array[5][5], counter = 0;

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
            if (array[i][j] < 0)
            {
                printf("Negative Numbers : %d\n", array[i][j]);
            }
        }
        /* printf("\n"); */
    }
    printf("\n\n");
}

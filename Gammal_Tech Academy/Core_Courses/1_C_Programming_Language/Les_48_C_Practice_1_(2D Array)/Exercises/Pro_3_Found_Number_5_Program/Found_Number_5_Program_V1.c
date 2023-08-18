

/* >>> Found Number 5 Program ( Version 1 ) <<< */

/* >>> A program that asks the person to enter a group of numbers, and if he finds a number from the one who entered them = 5, it prints it "found". <<< */

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
    printf("\n\nYou welcome in Found Number 5 Program ( Version 1 ) ..\n\n");
}

// Array function;
int arrayFun()
{
    // Get number;
    printf("Please enter 10 numbers : \n");

    int array[2][5], counter = 0;

    for (int i = 0; i < 2; i++)
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
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == 5)
            {
                printf("Found Number : %d\n", array[i][j]);
                printf("\n\n");
                return 0;
            }
        }
        /* printf("\n"); */
    }
}

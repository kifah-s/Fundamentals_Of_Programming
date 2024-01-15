

/* >>> Negative Numbers Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter 25 different numbers and print negative numbers to it. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumbersFun(int array[5][5]);
int printNumbersFun(int array[5][5]);

int main()
{
    welcomeMassageFun();

    int array[5][5];

    getNumbersFun(array);
    printNumbersFun(array);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Negative Numbers Program ( Version 2 ) ..\n\n");
}

// Get number function;
int getNumbersFun(int array[5][5])
{
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

// Print number function;
int printNumbersFun(int array[5][5])
{
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

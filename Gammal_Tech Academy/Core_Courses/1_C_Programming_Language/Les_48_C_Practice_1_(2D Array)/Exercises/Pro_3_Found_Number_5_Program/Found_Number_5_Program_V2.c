

/* >>> Found Number 5 Program ( Version 2 ) <<< */

/* >>> A program that asks the person to enter a group of numbers, and if he finds a number from the one who entered them = 5, it prints it "found". <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumbersFun(int array[2][5]);
int printNumber5Fun(int array[2][5]);

int main()
{
    welcomeMassageFun();

    int array[2][5];

    getNumbersFun(array);
    printNumber5Fun(array);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Number 5 Program ( Version 2 ) ..\n\n");
}

// Get numbers function;
int getNumbersFun(int array[2][5])
{
    // Get number;
    printf("Please enter 10 numbers : \n");

    int counter = 0;

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
}

// Print number function;
int printNumber5Fun(int array[2][5])
{
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

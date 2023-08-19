

/* >>> Positive Numbers Program ( Version 4 ) <<< */

/* >>> A program that reads 10 numbers and prints the positive numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int positiveNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;

    // Positive number function;
    positiveNumberFun(number);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Numbers Program ( Version 4 ) ..\n\n");
}

// Positive number function;
int positiveNumberFun(int number)
{
    int posNumCounter = 0, posNumSums = 0;
    printf("Please enter 10 numbers .. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nPlease enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number > 0)
        {
            printf("Positive number : %d\n", number);
            posNumCounter++;
            posNumSums = posNumSums + number;
        }
    }
    printf("\n\nThe numbers of positive number of array = %d\n", posNumCounter);
    printf("The sums positive number of array = %d\n\n\n", posNumSums);
}
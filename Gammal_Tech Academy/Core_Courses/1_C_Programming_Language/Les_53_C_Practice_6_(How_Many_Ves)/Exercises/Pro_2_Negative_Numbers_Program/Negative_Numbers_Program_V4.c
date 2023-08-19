

/* >>> Negative Numbers Program ( Version 4 ) <<< */

/* >>> A program that reads 10 numbers and prints the Negative numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int negativeNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;

    // Negative number function;
    negativeNumberFun(number);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Negative Numbers Program ( Version 4 ) ..\n\n");
}

// Negative number function;
int negativeNumberFun(int number)
{
    int negNumCounter = 0, negNumSums = 0;
    printf("Please enter 10 numbers .. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nPlease enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number > 0)
        {
            printf("Negative number : %d\n", number);
            negNumCounter++;
            negNumSums = negNumSums + number;
        }
    }
    printf("\n\nThe numbers of negative number of array = %d\n", negNumCounter);
    printf("The sums negative numbers of array = %d\n\n\n", negNumSums);
}
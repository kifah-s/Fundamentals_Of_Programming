

/* >>> Odd Numbers Program ( Version 4 ) <<< */

/* >>> A program that reads 10 numbers and prints the Odd numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int oddNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;

    // Odd number function;
    oddNumberFun(number);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Odd Numbers Program ( Version 4 ) ..\n\n");
}

// Odd number function;
int oddNumberFun(int number)
{
    int oddNumCounter = 0, oddNumSums = 0;
    printf("Please enter 10 numbers .. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nPlease enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 1)
        {
            printf("Odd number : %d\n", number);
            oddNumCounter++;
            oddNumSums = oddNumSums + number;
        }
    }
    printf("\n\nThe numbers of Odd number of array = %d\n", oddNumCounter);
    printf("The sums Odd numbers of array = %d\n\n\n", oddNumSums);
}
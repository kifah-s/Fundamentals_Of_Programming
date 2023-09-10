

/* >>> Number Analysis Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number that represents the set of numbers that he will enter and then asks the user to enter the set of numbers and then enters the number x to analyze the group numbers where how many numbers from the entry group (Divisible by x) (x divisible by x) (greater than x) (smaller than x) x is bigger than x is smaller than x is equal to x. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int NumberOfNumbersFun(int x);
int *getNumbersFun(int x, int arr[x]);
int numberToBeAnalyzedFun(int x);
void divisibleByNumFun(int y, int x, int arr[x]);
void numberDivisibleByFun(int y, int x, int arr[x]);
void greaterThanNumberFun(int y, int x, int arr[x]);
void smallerThanNumberFun(int y, int x, int arr[x]);
void equalThanNumberFun(int y, int x, int arr[x]);

int main()
{
    welcomeMassageFun();

    int numberOfNumber = NumberOfNumbersFun(numberOfNumber);
    // printf("\n%d\n\n", numberOfNumber); // Check.

    int arr[numberOfNumber];
    getNumbersFun(numberOfNumber, arr);
    /* for (int i = 0; i < numberOfNumber; i++)
    {
        printf("\n%d", arr[i]);
    } */
    // Check.

    int numberToBeAnalyzed = numberToBeAnalyzedFun(numberToBeAnalyzed);
    // printf("\n%d\n\n", numberToBeAnalyzed); // Check.

    divisibleByNumFun(numberToBeAnalyzed, numberOfNumber, arr);
    numberDivisibleByFun(numberToBeAnalyzed, numberOfNumber, arr);
    greaterThanNumberFun(numberToBeAnalyzed, numberToBeAnalyzed, arr);
    smallerThanNumberFun(numberToBeAnalyzed, numberToBeAnalyzed, arr);
    equalThanNumberFun(numberToBeAnalyzed, numberToBeAnalyzed, arr);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Analysis Program ( Version 1 ) ..\n\n");
}

// Get number of numbers / Function.
int NumberOfNumbersFun(int x)
{
    printf("Please enter number of numbers: ");
    scanf("%d", &x);

    return x;
}

// Get number / Function.
int *getNumbersFun(int x, int arr[x])
{
    printf("\nPlease enter %d number: \n", x);
    for (int i = 0; i < x; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    return arr;
}

// Get the number to be analyzed / Function.
int numberToBeAnalyzedFun(int x)
{
    printf("\nPlease enter the number to be analyzed: ");
    scanf("%d", &x);

    return x;
}

// Divisible By number / Function.
void divisibleByNumFun(int y, int x, int arr[x])
{
    int divisibleByY = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] % y == 0)
        {
            divisibleByY++;
        }
    }
    printf("\nNumber of Numbers that are divisible by %d: %d NUMBER\n", y, divisibleByY);
}

// Number Divisible By / Function.
void numberDivisibleByFun(int y, int x, int arr[x])
{
    int yDivisibleBy = 0;
    for (int i = 0; i < x; i++)
    {
        if (y % arr[i] == 0)
        {
            yDivisibleBy++;
        }
    }
    printf("The Number %d are divisible by: %d NUMBER\n", y, yDivisibleBy);
}

// Greater than the number / Function.
void greaterThanNumberFun(int y, int x, int arr[x])
{
    int greaterThanNumber = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > y)
        {
            greaterThanNumber++;
        }
    }
    printf("The Numbers Greater than %d: %d NUMBER\n", y, greaterThanNumber);
}

// smaller than the number / Function.
void smallerThanNumberFun(int y, int x, int arr[x])
{
    int smallerThanNumber = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] < y)
        {
            smallerThanNumber++;
        }
    }
    printf("The Numbers smaller than %d: %d NUMBER\n", y, smallerThanNumber);
}

// equal than the number / Function.
void equalThanNumberFun(int y, int x, int arr[x])
{
    int equalThanNumber = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == y)
        {
            equalThanNumber++;
        }
    }
    printf("The Numbers equal than %d: %d NUMBER\n\n\n", y, equalThanNumber);
}
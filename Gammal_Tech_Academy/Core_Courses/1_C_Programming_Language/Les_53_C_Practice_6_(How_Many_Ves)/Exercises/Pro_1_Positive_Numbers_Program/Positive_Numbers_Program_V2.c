

/* >>> Positive Numbers Program ( Version 2 ) <<< */

/* >>> A program that reads 10 numbers and prints the positive numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int elementOfArrayFun(int arr[10]);
int positiveNumberFun(int arr[10], int posNumCounter, int posNumSums);

int main()
{
    welcomeMassageFun();

    int arr[10];
    elementOfArrayFun(arr);
    /* for (int i = 0; i < number; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n\n");
   */

    int posNumCounter = 0, posNumSums = 0;
    positiveNumberFun(arr, posNumCounter, posNumSums);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Numbers Program ( Version 2 ) ..\n\n");
}

// Get element of array function;
int elementOfArrayFun(int arr[10])
{
    printf("Please enter 10 numbers .. \n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// Positive number function;
int positiveNumberFun(int arr[10], int posNumCounter, int posNumSums)
{
    printf("Positive numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d  ", arr[i]);
            posNumSums = posNumSums + arr[i];
            posNumCounter++;
        }
    }
    printf("\n\nThe numbers of positive number of array = %d\n", posNumCounter);
    printf("The sums positive number of array = %d\n\n\n", posNumSums);
}

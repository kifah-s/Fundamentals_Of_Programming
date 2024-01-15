

/* >>> Odd Numbers Program ( Version 1 ) <<< */

/* >>> A program that reads 10 numbers and prints the Odd numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int elementOfArrayFun(int arr[10]);
int oddNumberFun(int arr[10]);

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

    oddNumberFun(arr);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Odd Numbers Program ( Version 1 ) ..\n\n");
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

// Odd number function;
int oddNumberFun(int arr[10])
{
    int oddNumCounter = 0, oddNumSums = 0;
    printf("Odd numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("%d  ", arr[i]);
            oddNumSums = oddNumSums + arr[i];
            oddNumCounter++;
        }
    }
    printf("\n\nThe numbers of Odd number of array = %d\n", oddNumCounter);
    printf("The sums Odd numbers of array = %d\n\n\n", oddNumSums);
}



/* >>> Negative Numbers Program ( Version 1 ) <<< */

/* >>> A program that reads 10 numbers and prints the Negative numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int elementOfArrayFun(int arr[10]);
int negativeNumberFun(int arr[10]);

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

    negativeNumberFun(arr);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Negative Numbers Program ( Version 1 ) ..\n\n");
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

// Negative number function;
int negativeNumberFun(int arr[10])
{
    int negNumCounter = 0, negNumSums = 0;
    printf("Negative numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d  ", arr[i]);
            negNumSums = negNumSums + arr[i];
            negNumCounter++;
        }
    }
    printf("\n\nThe numbers of negative number of array = %d\n", negNumCounter);
    printf("The sums negative numbers of array = %d\n\n\n", negNumSums);
}



/* >>> Negative Numbers Program ( Version 3 ) <<< */

/* >>> A program that reads 10 numbers and prints the Negative numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int numberOfNumbersOfArrayFun(int number);
int elementOfArrayFun(int number, int arr[number]);
int negativeNumberFun(int number, int arr[number]);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = numberOfNumbersOfArrayFun(number);
    /* printf("The number of numbers of array : %d\n\n", number); */

    int arr[number];
    elementOfArrayFun(number, arr);
    /* for (int i = 0; i < number; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n\n");
   */

    negativeNumberFun(number, arr);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Negative Numbers Program ( Version 3 ) ..\n\n");
}

// Get the number of numbers of array function;
int numberOfNumbersOfArrayFun(int number)
{
    printf("Please enter the number of numbers of array: ");
    scanf("%d", &number);

    return number;
}

// Get element of array function;
int elementOfArrayFun(int number, int arr[number])
{
    printf("Please enter %d numbers .. \n\n", number);
    for (int i = 0; i < number; i++)
    {
        printf("Please enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

// Negative number function;
int negativeNumberFun(int number, int arr[number])
{
    int negNumCounter = 0, negNumSums = 0;
    printf("Negative numbers : \n");
    for (int i = 0; i < number; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d  ", arr[i]);
            negNumSums = negNumSums + arr[i];
            negNumCounter++;
        }
    }
    printf("\n\nThe numbers of negative number of array = %d\n", negNumCounter);
    printf("The sums negative numbers of array = %d\n\n\n", negNumSums);
}

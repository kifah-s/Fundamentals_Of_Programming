

/* >>> Even Numbers Program ( Version 1 ) <<< */

/* >>> A program that reads 10 numbers and prints the Even numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int elementOfArrayFun(int arr[10]);
int evenNumberFun(int arr[10]);

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

    evenNumberFun(arr);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Numbers Program ( Version 1 ) ..\n\n");
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

// Even number function;
int evenNumberFun(int arr[10])
{
    int eveNumCounter = 0, eveNumSums = 0;
    printf("Even numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d  ", arr[i]);
            eveNumSums = eveNumSums + arr[i];
            eveNumCounter++;
        }
    }
    printf("\n\nThe numbers of Even number of array = %d\n", eveNumCounter);
    printf("The sums Even numbers of array = %d\n\n\n", eveNumSums);
}

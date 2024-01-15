

/* >>> Problem Solving ( Version 1 ) <<< */

/* >>> Problem statement

Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrences) of the minimum element is odd.

Input

First line contains a number N (2 ≤ N ≤ 1000) the number of elements.

Second line contains N numbers ( - 10^5 ≤  A[i] ≤ 10^5).

Output

Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int numberOfElementsFun();
int getElementsOfArrayFun(int numberOfElements, int arr[numberOfElements]);
int smallerNumberInArrayFun(int numberOfElements, int arr[numberOfElements]);
int checkIterationsFun(int smallerNumber, int numberOfElements, int arr[numberOfElements]);
int luckyOrUnLuckyArrayFun(int smallerNumberCounter);

int main()
{
    // Welcome massage function;
    welcomeMassageFun();

    // Get the number of elements of the array function;
    int numberOfElements = numberOfElementsFun();
    /* printf("the number of elements of the array = %d\n\n", numberOfElements); */

    // Declare Array;
    int arr[numberOfElements];

    // Get elements of array function;
    getElementsOfArrayFun(numberOfElements, arr);
    /* for (int i = 0; i < numberOfElements; i++)
    {
        printf("elements of array : %d\n", arr[i]);
    } */

    // Check smaller number in array function;
    int smallerNumber = smallerNumberInArrayFun(numberOfElements, arr);
    /* printf("\nSmaller number is : %d\n\n", smallerNumber); */

    // Check The number of iterations of the smaller number function;
    int smallerNumberCounter = checkIterationsFun(smallerNumber, numberOfElements, arr);
    /* printf("\nnumber of iterations the Smaller number is : %d\n\n", smallerNumberCounter); */

    // lucky or not lucky array function;
    luckyOrUnLuckyArrayFun(smallerNumberCounter);

    /* <<<
    test cases ..
    case 1
    5
    1   1   1   4   5
    1
    3
    LUCKY
    ------------------
    case 2
    5
    1   1      4   5
    1
    2
    UNLUCKY
     >>> */

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Problem Solving ( Version 1 ) ..\n\n");
}

// Get the number of elements of the array function;
int numberOfElementsFun()
{
    int numberOfElements = 0;
    do
    {
        printf("Please Enter the number of elements of the array - (note : please enter number between 2 and 1000) : ");
        scanf("%d", &numberOfElements);
    } while (numberOfElements < 2 || numberOfElements > 1000);

    return numberOfElements;
}

// Get elements of array function;
int getElementsOfArrayFun(int numberOfElements, int arr[numberOfElements])
{
    for (int i = 0; i < numberOfElements; i++)
    {
        int element = 0;
        do
        {
            printf("Please Enter number %d - (note : please enter number between -50 and 50) : ", i + 1);
            scanf("%d", &element);

        } while (element < -50 || element > 50);
        arr[i] = element;
    }
}

// Check smaller number in array function;
int smallerNumberInArrayFun(int numberOfElements, int arr[numberOfElements])
{
    int smallerNumber = arr[0];
    for (int i = 0; i < numberOfElements; i++)
    {
        if (arr[i] < smallerNumber)
        {
            smallerNumber = arr[i];
        }
    }
    return smallerNumber;
}

// Check The number of iterations of the smaller number function;
int checkIterationsFun(int smallerNumber, int numberOfElements, int arr[numberOfElements])
{
    int smallerNumberCounter = 0;
    for (int i = 0; i < numberOfElements; i++)
    {
        if (smallerNumber == arr[i])
        {
            smallerNumberCounter++;
        }
    }

    return smallerNumberCounter;
}

// lucky or Un lucky array function;
int luckyOrUnLuckyArrayFun(int smallerNumberCounter)
{
    if (smallerNumberCounter % 2 == 1)
    {
        printf("\nARRAY IS \" UNLUCKY \" \n\n\n");
    }
    else
    {
        printf("\nARRAY IS \" UNLUCKY \" \n\n\n");
    }
}


//* From The Third Program (Version 1).

/*
 * Write a program that calculates the average of elements in the array {3, 7, 2, 9, 4, 6},
 * starting from the third element and up to the last element.
 * Display the average with two decimal places.
 */

/*
! Output:
! Original Array Elements: 3 7 2 9 4 6
! Average Of Array Elements: 5.25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printOriginalArrayElementsFun(int numOfEle, int arr[]);
void calculateAndPrintAverageFun(int numOfEle, int arr[], int sum, float average);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[] = {3, 7, 2, 9, 4, 6};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);
    int sumOfElements = 0;
    float averageOfElements = 0;

    // Print Original Array Elements and Average.
    printOriginalArrayElementsFun(numberOfElements, myArray);
    calculateAndPrintAverageFun(numberOfElements, myArray, sumOfElements, averageOfElements);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From The Third Program (Version 1) ..\n\n");
}

// Print Original Array Elements - Function.
void printOriginalArrayElementsFun(int numOfEle, int arr[])
{
    printf("Original Array Elements: ");
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Calculate And Print Average - Function.
void calculateAndPrintAverageFun(int numOfEle, int arr[], int sum, float average)
{
    for (int i = 2; i < numOfEle; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / 4;
    printf("\nAverage Of Array Elements: %0.2f", average);
}

//* End Function ..

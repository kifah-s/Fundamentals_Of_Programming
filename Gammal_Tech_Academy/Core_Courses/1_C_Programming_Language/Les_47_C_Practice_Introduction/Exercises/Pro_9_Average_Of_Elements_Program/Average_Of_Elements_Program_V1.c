

//* Average Of Elements Program (Version 1).

/*
 * Write a program to find the average of elements in the array {4, 8, 12, 16, 20}.
 */

/*
! Output:
! Average Of Array Elements: 12
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void averageOfArrayElementsFun(int arr[], int numOfEle, int sum, int average);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[] = {4, 8, 12, 16, 20};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);
    int sumOfElements = 0;
    int averageOfElements = 0;

    // Print Average Of Array Elements.
    averageOfArrayElementsFun(myArray, numberOfElements, sumOfElements, averageOfElements);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Of Elements Program (Version 1) ..\n\n");
}

// Average Of Array Elements - Function.
void averageOfArrayElementsFun(int arr[], int numOfEle, int sum, int average)
{
    for (int i = 0; i < numOfEle; i++)
    {
        sum = sum + arr[i];
    }
    average = sum / numOfEle;
    printf("Average Of Array Elements: %d", average);
}
//* End Function ..

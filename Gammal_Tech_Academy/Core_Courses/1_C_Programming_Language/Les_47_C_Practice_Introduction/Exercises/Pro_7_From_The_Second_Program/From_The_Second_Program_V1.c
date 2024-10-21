

//* From The Second Program (Version 1).

/*
 * Write a C program that initializes an array of integers {2, 4, 6, 8, 10},
 * and calculates the sum of its elements starting from the second element up to the fourth element (inclusive),
 * Display the calculated sum.
 */

/*
! Output:
! Sum Of Array Elements: 18
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void sumOfArrayElementsFun(int arr[], int numOfEle, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[] = {2, 4, 6, 8, 10};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);
    int sumOfElements = 0;

    // Print Sum Of Array Elements.
    sumOfArrayElementsFun(myArray, numberOfElements, sumOfElements);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From The Second Program (Version 1) ..\n\n");
}

// Sum Of Array Elements - Function.
void sumOfArrayElementsFun(int arr[], int numOfEle, int sum)
{
    for (int i = 1; i < numOfEle - 1; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum Of Array Elements: %d", sum);
}
//* End Function ..

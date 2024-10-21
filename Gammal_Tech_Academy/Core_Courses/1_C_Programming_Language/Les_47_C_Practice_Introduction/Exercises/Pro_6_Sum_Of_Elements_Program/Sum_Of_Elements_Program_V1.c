

//* Sum Of Elements Program (Version 1).

/*
 * Write a program to find the sum of elements in the array {2, 4, 6, 8, 10}.
 */

/*
! Output:
! Sum Of Array Elements: 30
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
    printf("\n\nYou welcome in Sum Of Elements Program (Version 1) ..\n\n");
}

// Sum Of Array Elements - Function.
void sumOfArrayElementsFun(int arr[], int numOfEle, int sum)
{
    for (int i = 0; i < numOfEle; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum Of Array Elements: %d", sum);
}
//* End Function ..



//* Print Elements Program (Version 1).

/*
 * Write a program to declare an array of integers {3, 7, 1, 4, 9} and print its elements.
 */

/*
! Output:
! Array elements: 3 7 1 4 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printElementsFun(int numOfEle, int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[] = {3, 7, 1, 4, 9};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);

    // Call Functions.
    printElementsFun(numberOfElements, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Print Elements Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int numOfEle, int arr[])
{
    printf("Array Elements:\n");
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d ", arr[i]);
    }
}
//* End Function ..

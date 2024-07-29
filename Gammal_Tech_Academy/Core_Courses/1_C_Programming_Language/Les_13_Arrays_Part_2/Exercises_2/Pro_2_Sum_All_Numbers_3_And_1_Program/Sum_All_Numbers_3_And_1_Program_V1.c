

//* Sum All Numbers 3 And 1 Program (Version 1).

/*
 * Write a program that initializes an array of 7 integers with values {1, 3, 2, 3, 3, 1, 1},
 * calculates the sum of occurrences of the numbers 3 and 1, and then outputs the total sum.
 */

/*
! Output:
! Sum of all occurrences of the numbers 3 and 1 = 12
*/

#include <stdio.h>

void welcomeMessageFun();
void sumAllNumber3Fun(int arr[], int len, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[] = {1, 3, 2, 3, 3, 1, 1}, sumAllNumber = 0;

    // Calculate the length of my array.
    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);

    sumAllNumber3Fun(myArray, myArrayLength, sumAllNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum All Numbers 3 And 1 Program (Version 1) ..\n\n");
}

// Sum All Number 3 - Function.
void sumAllNumber3Fun(int arr[], int len, int sum)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 3 || arr[i] == 1)
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of all occurrences of the numbers 3 And 1 = %i", sum);
}

//
//* End Function ..

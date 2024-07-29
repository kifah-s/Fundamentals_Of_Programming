

//* Sum All Number 3 Program (Version 1).

/*
 * Write a program that initializes an array of 5 integers with values {1, 3, 2, 3, 3},
 * calculates the sum of all occurrences of the number 3, and then outputs the total sum.
 */

/*
! Output:
! Sum of all occurrences of the number 3 = 9
*/

#include <stdio.h>

void welcomeMessageFun();
void sumAllNumber3Fun(int arr[], int len, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[] = {1, 3, 2, 3, 3}, sumAllNumber = 0;

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
    printf("\n\nYou welcome in Sum All Number 3 Program (Version 1) ..\n\n");
}

// Sum All Number 3 - Function.
void sumAllNumber3Fun(int arr[], int len, int sum)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 3)
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of all occurrences of the number 3 = %i", sum);
}

//
//* End Function ..

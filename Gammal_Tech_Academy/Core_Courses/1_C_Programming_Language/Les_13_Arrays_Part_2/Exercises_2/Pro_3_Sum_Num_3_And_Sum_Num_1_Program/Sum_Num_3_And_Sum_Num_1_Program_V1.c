

//* Sum Num 3 And Sum Num 1 Program (Version 1).

/*
 * Write a program that initializes an array of 7 integers with values {1, 3, 2, 3, 3, 1, 1},
 * calculates the sum of occurrences of the numbers 3 and the sum of occurrences of the number 1,
 * and then outputs both totals.
 */

/*
! Output:
! Sum of all occurrences of the numbers 1 = 3
! Sum of all occurrences of the numbers 3 = 9
*/

#include <stdio.h>

void welcomeMessageFun();
void sumNum1AndSumNum3Fun(int arr[], int len, int sum1, int sum3);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[] = {1, 3, 2, 3, 3, 1, 1}, sumNum1 = 0, sumNum3 = 0;

    // Calculate the length of my array.
    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);

    sumNum1AndSumNum3Fun(myArray, myArrayLength, sumNum1, sumNum3);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Num 3 And Sum Num 1 Program (Version 1) ..\n\n");
}

// Sum Number 1 And Sum Number 3 - Function.
void sumNum1AndSumNum3Fun(int arr[], int len, int sum1, int sum3)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {
            sum1 = sum1 + arr[i];
        }
        else if (arr[i] == 3)
        {
            sum3 = sum3 + arr[i];
        }
    }

    printf("Sum of all occurrences of the numbers 1 = %i\n", sum1);
    printf("Sum of all occurrences of the numbers 3 = %i", sum3);
}

//
//* End Function ..

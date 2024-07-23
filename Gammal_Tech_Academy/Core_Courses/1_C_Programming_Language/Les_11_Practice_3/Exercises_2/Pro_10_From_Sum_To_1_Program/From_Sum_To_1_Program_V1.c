

//* From Sum To 1 Program (Version 1).

/*
 * Write a program that initializes two integers num1 and num2 with values 5 and 3, respectively,
 * Calculate their sum and then print the numbers from the sum down to 1,\
 * using a loop.
 */

/*
! Output:
! 8
! 7
! 5
! 6
! 4
! 3
! 2
! 1
*/

#include <stdio.h>

void welcomeMessageFun();
int sumNumbersFun(int n1, int n2, int sum);
int printNumbersFromSumTo1Fun(int sum);
void sumAndPrintNumbersFun(int n1, int n2, int sum);

int main()
{
    // Declare Variables.
    int num1 = 5, num2 = 3, sum = 0;

    // Sum and Print Numbers.
    sumAndPrintNumbersFun(num1, num2, sum);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From Sum To 1 Program (Version 1) ..\n\n");
}

// Sum Numbers - Function.
int sumNumbersFun(int n1, int n2, int sum)
{
    sum = n1 + n2;

    return sum;
}

// Print Numbers From Sum To 1 - Function.
int printNumbersFromSumTo1Fun(int sum)
{
    for (int i = sum; i > 0; i--)
    {
        printf("%i\n", i);
    }
}

// Sum and Print Numbers - Function.
void sumAndPrintNumbersFun(int n1, int n2, int sum)
{
    // Welcome Message.
    welcomeMessageFun();

    // Sum Numbers.
    sum = sumNumbersFun(n1, n2, sum);

    // Print Numbers from 1 to sum.
    printNumbersFromSumTo1Fun(sum);

    printf("\n\n");
}

//* End Function ..

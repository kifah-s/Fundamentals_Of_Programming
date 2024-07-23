

//* From 1 To Sum Program (Version 1).

/*
 * Write a program that initializes two integers num1 and num2 with values 5 and 3, respectively,
 * Calculate their sum and then print the numbers from 1 to the sum,
 * using a loop.
 */

/*
! Output:
! 1
! 2
! 3
! 4
! 5
! 6
! 7
! 8
*/

#include <stdio.h>

void welcomeMessageFun();
int sumNumbersFun(int n1, int n2, int sum);
int printNumbersFrom1ToSumFun(int sum);
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
    printf("\n\nYou welcome in From 1 To Sum Program (Version 1) ..\n\n");
}

// Sum Numbers - Function.
int sumNumbersFun(int n1, int n2, int sum)
{
    sum = n1 + n2;

    return sum;
}

// Print Numbers From 1 To Sum - Function.
int printNumbersFrom1ToSumFun(int sum)
{
    for (int i = 1; i <= sum; i++)
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
    printNumbersFrom1ToSumFun(sum);

    printf("\n\n");
}

//* End Function ..

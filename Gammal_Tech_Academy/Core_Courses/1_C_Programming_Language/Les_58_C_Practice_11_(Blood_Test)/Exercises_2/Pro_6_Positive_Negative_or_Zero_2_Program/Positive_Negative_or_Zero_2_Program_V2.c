

//* Positive Negative or Zero 2 Program (Version 2).

/*
 * Write a program that takes an integer as input and determines whether it is positive, negative, or zero.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! Positive.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void positiveNegativeOrZeroFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    positiveNegativeOrZeroFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Positive Negative or Zero 2 Program (Version 2) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Positive, Negative or Zero - Function.
void positiveNegativeOrZeroFun(int num)
{
    num = receiveNumberFun(num);

    // if (num > 0)
    // {
    //     printf("\nPositive.");
    // }
    // else if (num < 0)
    // {
    //     printf("\nNegative.");
    // }
    // else
    // {
    //     printf("\nZero.");
    // }

    (num > 0) ? printf("\nPositive.") : (num < 0) ? printf("\nNegative.")
                                                  : printf("\nZero.");
}
//* End Function ..

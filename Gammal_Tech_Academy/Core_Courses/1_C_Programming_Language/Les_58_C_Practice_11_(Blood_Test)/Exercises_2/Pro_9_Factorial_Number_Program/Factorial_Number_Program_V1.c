

//* Factorial Number Program (Version 1).

/*
 * Write a program that calculates the factorial of a given number.
 */

/*
! Input:
! Please enter a number: 7

! Output:
! Factorial 7: 5040
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printResult(int num, int facNum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, factorialNumber = 1;

    // Call Functions.
    printResult(number, factorialNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Factorial Number Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate factorial - Function.
int calculateFactorialFun(int num, int facNum)
{
    // for (int i = 2; i <= num; i++)
    // {
    //     facNum = facNum * i;
    // }

    for (int i = num; i >= 2; i--)
    {
        facNum = facNum * i;
    }

    return facNum;
}

// Print result - Function.
void printResult(int num, int facNum)
{
    num = receiveNumberFun(num);
    facNum = calculateFactorialFun(num, facNum);

    printf("Factorial %d: %d", num, facNum);
}
//* End Function ..

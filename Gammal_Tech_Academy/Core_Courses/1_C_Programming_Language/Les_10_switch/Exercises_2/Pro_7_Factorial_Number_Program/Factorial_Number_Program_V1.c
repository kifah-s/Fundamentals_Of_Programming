

//* Factorial Number Program (Version 1).

/*
 * Write a program to calculate the factorial of a given number.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! Factorial of 5 is: 120
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void calcFactorialNumberFun(int num, int facNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, factorialNumber = 1;

    number = gettingNumberFun(number);
    calcFactorialNumberFun(number, factorialNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Factorial Number Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Calculate factorial Number - Function.
void calcFactorialNumberFun(int num, int facNum)
{
    switch (num >= 0)
    {
    case 1:
        for (int i = 1; i <= num; i++)
        {
            facNum = facNum * i;
        }
        printf("\nFactorial of %i is: %i", num, facNum);
        break;

    case 0:
        printf("\nFactorial is not defined for negative number.");
        break;
    }
}
//* End Function ..

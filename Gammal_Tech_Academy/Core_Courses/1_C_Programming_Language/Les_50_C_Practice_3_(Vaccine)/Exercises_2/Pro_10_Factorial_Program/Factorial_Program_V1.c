

//* Factorial Program (Version 1).

/*
 * Write a program that takes an integer input 'n' and prints the factorial of 'n'.
 */

/*
! Input:
! Please enter a numbers: 4

! Output:
! Factorial of 4 is: 24
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n);
void calculateFactorialFun(int n, int fac);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, factorial = 1;

    // Call Functions.
    calculateFactorialFun(num, factorial);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Factorial Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n)
{
    printf("Please enter a number: ");
    scanf("%d", &n);

    return n;
}

// Calculate Factorial - Function.
void calculateFactorialFun(int n, int fac)
{
    n = receiveNumFun(n);

    for (int i = 1; i <= n; i++)
    {
        // fac = fac * i;
        fac *= i;
    }

    printf("\nFactorial of %d is: %d", n, fac);
}
//* End Function ..

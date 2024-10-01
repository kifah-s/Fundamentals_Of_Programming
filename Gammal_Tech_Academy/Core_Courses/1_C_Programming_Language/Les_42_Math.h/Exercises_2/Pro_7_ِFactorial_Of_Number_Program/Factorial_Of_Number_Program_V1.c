

//* Factorial Of Number Program (Version 1).

/*
 * Calculate the factorial of a number.
 */

/*
! Input:
! Please enter a positive number: 5

! Output:
! Factorial: 120
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
int calculateFactorialFun(int num, int fac);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, factorial = 1;

    // Call Function.
    number = gettingNumberFun(number);
    factorial = calculateFactorialFun(number, factorial);

    // Print Result.
    printf("\nFactorial: %d", factorial);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Factorial Of Number Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Factorial - Function.
int calculateFactorialFun(int num, int fac)
{
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }

    return fac;
}
//* End Function ..

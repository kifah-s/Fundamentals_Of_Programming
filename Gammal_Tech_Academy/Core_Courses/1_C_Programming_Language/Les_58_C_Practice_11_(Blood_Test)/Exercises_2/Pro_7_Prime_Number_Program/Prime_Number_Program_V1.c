

//* Prime Number Program (Version 1).

/*
 * Write a program that checks if a given number is a prime number.
 */

/*
! Input:
! Please enter a number: 11

! Output:
! 11 is a prime number.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void primeOrNotPrimeFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    primeOrNotPrimeFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Prime Number Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Prime or Not Prime - Function.
void primeOrNotPrimeFun(int num)
{
    num = receiveNumberFun(num);

    if (num > 1 && num % 2 != 0 || num == 2)
    {
        printf("%d is a Prime number.", num);
    }
    else
    {
        printf("%d is Not Prime number.");
    }
}

//* End Function ..

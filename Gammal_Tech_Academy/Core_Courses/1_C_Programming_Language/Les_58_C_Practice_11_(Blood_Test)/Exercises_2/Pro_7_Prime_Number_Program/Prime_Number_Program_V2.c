

//* Prime Number Program (Version 2).

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
void printResultFun(int num, bool pri);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;
    bool prime = true;

    // Call Functions.
    printResultFun(number, prime);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Prime Number Program (Version 2) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Prime or Not Prime - Function.
bool primeOrNotPrimeFun(int num, bool pri)
{
    for (int i = 2; i <= num; i++)
    {
        if (num % 2 == 0)
        {
            pri = false;
        }
    }

    return pri;
}

// Print result - Function.
void printResultFun(int num, bool pri)
{
    num = receiveNumberFun(num);
    pri = primeOrNotPrimeFun(num, pri);

    if (pri == true)
    {
        printf("%d is a Prime number.", num);
    }
    else
    {
        printf("%d is Not Prime number.", num);
    }
}
//* End Function ..

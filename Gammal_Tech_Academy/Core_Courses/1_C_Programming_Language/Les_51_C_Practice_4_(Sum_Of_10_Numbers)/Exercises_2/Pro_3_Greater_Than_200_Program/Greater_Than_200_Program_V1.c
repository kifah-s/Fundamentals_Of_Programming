

//* Greater Than 200 Program (Version 1).

/*
 * Write a program that initializes a total value to 500,
 * and then prompts the user to enter 5 numbers one by one,
 * Subtract  each entered number from the total.
 * After processing all entries, check if the resulting total is greater than 200.
 * If the total is greater than 200, output "true" otherwise, output "false".
 * Declare necessary variables and use a loop and conditional statements to achieve this.
 */

/*
! Input:
! 1) Please enter a number: 30
! 2) Please enter a number: 322
! 3) Please enter a number: 15
! 4) Please enter a number: 0
! 5) Please enter a number: 3

! Output:
! False.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n, int i);
int calculateSubtractFun(int n, int t);
void checkNumberFun(int n, int t);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, totalValue = 500;

    // Call Functions.
    checkNumberFun(num, totalValue);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 200 Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n, int i)
{
    printf("%d) Please enter a number: ", i + 1);
    scanf("%d", &n);

    return n;
}

// Calculate Subtract - Function.
int calculateSubtractFun(int n, int t)
{
    for (int i = 0; i < 5; i++)
    {
        n = receiveNumFun(n, i);
        t = t - n;
    }

    return t;
}

// Check Number - Function.
void checkNumberFun(int n, int t)
{
    t = calculateSubtractFun(n, t);

    if (t > 200)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
}
//* End Function ..

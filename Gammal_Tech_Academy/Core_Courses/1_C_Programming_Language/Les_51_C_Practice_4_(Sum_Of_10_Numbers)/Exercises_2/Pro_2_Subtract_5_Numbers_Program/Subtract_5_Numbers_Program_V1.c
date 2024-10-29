

//* Subtract 5 Numbers Program (Version 1).

/*
 * Write a program that initializes a total value to 500,
 * and then prompts the user to enter 5 numbers one by one.
 * Subtract each entered number from the total.
 * Declare necessary variables and use a loop to achieve this.
 */

/*
! Input:
! 1) Please enter a number: 70
! 2) Please enter a number: 30
! 3) Please enter a number: 5
! 4) Please enter a number: 60
! 5) Please enter a number: 32

! Output:
! Remaining total after subtracting the 5 numbers is: 303
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n, int i);
void calculateSubtractFun(int n, int t);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, totalValue = 500;

    // Call Functions.
    calculateSubtractFun(num, totalValue);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Subtract 5 Numbers Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n, int i)
{
    printf("%d) Please enter a number: ", i + 1);
    scanf("%d", &n);

    return n;
}

// Calculate Subtract - Function.
void calculateSubtractFun(int n, int t)
{
    for (int i = 0; i < 5; i++)
    {
        n = receiveNumFun(n, i);
        t = t - n;
    }

    printf("\nRemaining total after subtracting the 5 numbers is: %d", t);
}
//* End Function ..

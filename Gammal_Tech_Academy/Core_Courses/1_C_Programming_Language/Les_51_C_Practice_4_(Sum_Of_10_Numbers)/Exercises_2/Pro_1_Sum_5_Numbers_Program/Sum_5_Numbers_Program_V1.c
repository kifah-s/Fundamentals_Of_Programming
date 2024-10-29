

//* Sum 5 Numbers Program (Version 1).

/*
 * Write a program that prompts the user to enter 5 numbers one by one,
 * and calculates the sum of these numbers.
 * Declare necessary variables and use a loop to achieve this.
 */

/*
! Input:
! 1) Please enter a number: 1
! 2) Please enter a number: 2
! 3) Please enter a number: 3
! 4) Please enter a number: 4
! 5) Please enter a number: 5

! Output:
! Sum of the 5 numbers is: 15
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n, int i);
void calculateSumFun(int n, int s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, sum = 0;

    // Call Functions.
    calculateSumFun(num, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum 5 Numbers Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n, int i)
{
    printf("%d) Please enter a number: ", i + 1);
    scanf("%d", &n);

    return n;
}

// Calculate Sum - Function.
void calculateSumFun(int n, int s)
{
    for (int i = 0; i < 5; i++)
    {
        n = receiveNumFun(n, i);
        s = s + n;
    }

    printf("\nSum of 5 numbers is: %d", s);
}
//* End Function ..

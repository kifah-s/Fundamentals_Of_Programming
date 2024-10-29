

//* Multiple Of Second Program (Version 1).

/*
 * Write a program that takes two integers as input and checks if the first number,
 * is a multiple of the second number.
 */

/*
! Input:
! Please enter Two numbers:
! num 1: 12
! num 2: 3

! Output:
! 12 is a multiple of 3.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNum1Fun(int n1);
int receiveNum2Fun(int n2);
void checkNumbersFun(int n1, int n2);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0;

    // Call Functions.
    checkNumbersFun(num1, num2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiple Of Second Program (Version 1) ..\n\n");
}

// Receive num 1 - Function.
int receiveNum1Fun(int n1)
{
    printf("Please enter Two numbers:\n");
    printf("Please enter num 1: ");
    scanf("%d", &n1);

    return n1;
}

// Receive num 2 - Function.
int receiveNum2Fun(int n2)
{
    printf("Please enter num 2: ");
    scanf("%d", &n2);

    return n2;
}

// Check numbers - Function.
void checkNumbersFun(int n1, int n2)
{
    n1 = receiveNum1Fun(n1);
    n2 = receiveNum2Fun(n2);

    if (n1 % n2 == 0)
    {
        printf("\n%d is a multiple of %d.", n1, n2);
    }
    else
    {
        printf("\n%d is Not a multiple of %d.", n1, n2);
    }
}
//* End Function ..

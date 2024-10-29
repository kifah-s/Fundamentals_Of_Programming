

//* True OR False Program (Version 1).

/*
 * Write a program that takes three integer inputs, x, y, and z,
 * and determines whether the inequality y + 2 * z is less than or equal to x.
 * The program should output "true" if the condition is satisfied and "False" otherwise.
 */

/*
! Input:
! Please enter three numbers:
! num 1: 5
! num 2: 2
! num 3: 1

! Output:
! True
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNum1Fun(int n1);
int receiveNum2Fun(int n2);
int receiveNum3Fun(int n3);
void checkNumbersFun(int n1, int n2, int n3);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0, num3 = 0;

    // Call Functions.
    checkNumbersFun(num1, num2, num3);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in True OR False Program (Version 1) ..\n\n");
}

// Receive num 1 - Function.
int receiveNum1Fun(int n1)
{
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

// Receive num 3 - Function.
int receiveNum3Fun(int n3)
{
    printf("Please enter num 3: ");
    scanf("%d", &n3);

    return n3;
}

// Check numbers - Function.
void checkNumbersFun(int n1, int n2, int n3)
{
    n1 = receiveNum1Fun(n1);
    n2 = receiveNum2Fun(n2);
    n3 = receiveNum3Fun(n3);

    if (n2 + 2 * n3 <= n1)
    {
        printf("\nTrue.");
    }
    else
    {
        printf("\nFalse.");
    }
}
//* End Function ..

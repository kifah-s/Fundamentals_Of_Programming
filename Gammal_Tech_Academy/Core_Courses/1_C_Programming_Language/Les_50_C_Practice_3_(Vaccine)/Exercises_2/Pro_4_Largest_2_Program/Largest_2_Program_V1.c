

//* Largest 2 Program (Version 1).

/*
 * Write a program that takes four numbers as input and determines the largest among them.
 */

/*
! Input:
! Please enter three numbers:
! num 1: 1
! num 2: 5
! num 3: 3
! num 4: 2

! Output:
! The largest numbers is: 6
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNum1Fun(int n1);
int receiveNum2Fun(int n2);
int receiveNum3Fun(int n3);
int receiveNum4Fun(int n4);
void checkNumbersFun(int n1, int n2, int n3, int n4);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

    // Call Functions.
    checkNumbersFun(num1, num2, num3, num4);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Largest 2 Program (Version 1) ..\n\n");
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

// Receive num 4 - Function.
int receiveNum4Fun(int n4)
{
    printf("Please enter num 4: ");
    scanf("%d", &n4);

    return n4;
}

// Check numbers - Function.
void checkNumbersFun(int n1, int n2, int n3, int n4)
{
    n1 = receiveNum1Fun(n1);
    n2 = receiveNum2Fun(n2);
    n3 = receiveNum3Fun(n3);
    n4 = receiveNum4Fun(n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("\nThe largest numbers is %d.", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("\nThe largest numbers is %d.", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("\nThe largest numbers is %d.", n3);
    }
    else
    {
        printf("\nThe largest numbers is %d.", n4);
    }
}
//* End Function ..

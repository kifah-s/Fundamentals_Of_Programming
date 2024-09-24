

//* Integer And NOT Operation 2 Program (Version 1).

/*
 * Write a program that takes an integer input from the
 * user, performs multiple bitwise NOT operations on it, and prints the result.
 */

/*
! Input:
! Please enter an integer: 30

! Output:
! Result 1: -31
! Result 2: -30
! Result 3: -31
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int n1);
int resultNOToperation1Fun(int n1, int res);
int resultNOToperation2Fun(int n1, int res);
int resultNOToperation3Fun(int n1, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, result = 0;

    // Calling Functions.
    num1 = gettingNumberFun(num1);

    result = resultNOToperation1Fun(num1, result);
    printf("Result 1: %d\n", result);

    result = resultNOToperation2Fun(num1, result);
    printf("Result 2: %d\n", result);

    result = resultNOToperation3Fun(num1, result);
    printf("Result 3: %d\n", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Integer And NOT Operation Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n1)
{
    printf("Please enter an Integer: ");
    scanf("%d", &n1);

    return n1;
}

// Result NOT Operation 1 - Function.
int resultNOToperation1Fun(int n1, int res)
{
    res = ~n1;

    return res;
}

// Result NOT Operation 2 - Function.
int resultNOToperation2Fun(int n1, int res)
{
    res = ~~n1;

    return res;
}

// Result NOT Operation 3 - Function.
int resultNOToperation3Fun(int n1, int res)
{
    res = ~~~n1;

    return res;
}
//* End Function ..

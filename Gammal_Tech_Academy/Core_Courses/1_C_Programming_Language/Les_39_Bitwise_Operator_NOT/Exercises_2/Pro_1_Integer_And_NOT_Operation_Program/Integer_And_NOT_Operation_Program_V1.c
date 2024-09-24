

//* Integer And NOT Operation Program (Version 1).

/*
 * Write a program that takes an integer input from the
 * user, performs a bitwise NOT operation on it, and then prints the result.
 */

/*
! Input:
! Please enter an integer: 5

! Output:
! Result of bitwise NOT operation: -6
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int n1);
int resultNOToperationFun(int n1, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, result = 0;

    // Calling Functions.
    num1 = gettingNumberFun(num1);
    result = resultNOToperationFun(num1, result);

    // Print result.
    printf("Result of bitwise NOT operation: %d", result);

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

// Result NOT Operation - Function.
int resultNOToperationFun(int n1, int res)
{
    res = ~n1;

    return res;
}
//* End Function ..

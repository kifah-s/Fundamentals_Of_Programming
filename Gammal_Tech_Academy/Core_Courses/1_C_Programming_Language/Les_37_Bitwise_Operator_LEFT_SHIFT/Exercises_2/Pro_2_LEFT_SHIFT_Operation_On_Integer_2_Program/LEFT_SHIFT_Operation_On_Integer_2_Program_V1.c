

//* LEFT SHIFT Operation On Integer 2 Program (Version 1).

/*
 * Write a program that takes an integer as input from the user and performs a left shift operation on it.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! Result of LEFT SHIFT operation: 12
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int n1);
int resultLeftShiftOperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 1, result = 0;

    // Calling Functions.
    num1 = gettingNumberFun(num1);
    result = resultLeftShiftOperationFun(num1, num2, result);

    // Print result.
    printf("Result of LEFT SHIFT operation: %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in LEFT SHIFT Operation On Integer 2 Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n1)
{
    printf("Please enter number: ");
    scanf("%d", &n1);

    return n1;
}

// Result LEFT SHIFT Operation - Function.
int resultLeftShiftOperationFun(int n1, int n2, int res)
{
    res = n1 << n2;

    return res;
}
//* End Function ..

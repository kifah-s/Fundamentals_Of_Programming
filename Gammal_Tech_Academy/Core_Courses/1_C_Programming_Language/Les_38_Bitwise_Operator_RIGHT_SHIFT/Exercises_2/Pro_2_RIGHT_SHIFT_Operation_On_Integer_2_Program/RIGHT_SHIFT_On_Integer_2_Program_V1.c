

//* RIGHT SHIFT Operation On Integer 2 Program (Version 1).

/*
 * Write a program that takes an integer input from the
 * user, performs a right shift operation on it by one position, and then prints the result.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! Result of RIGHT SHIFT operation: 12
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int n1);
int resultRIGHTShiftOperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 1, result = 0;

    // Calling Functions.
    num1 = gettingNumberFun(num1);
    result = resultRIGHTShiftOperationFun(num1, num2, result);

    // Print result.
    printf("Result of RIGHT SHIFT operation: %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in RIGHT SHIFT Operation On Integer 2 Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n1)
{
    printf("Please enter number: ");
    scanf("%d", &n1);

    return n1;
}

// Result RIGHT SHIFT Operation - Function.
int resultRIGHTShiftOperationFun(int n1, int n2, int res)
{
    res = n1 >> n2;

    return res;
}
//* End Function ..

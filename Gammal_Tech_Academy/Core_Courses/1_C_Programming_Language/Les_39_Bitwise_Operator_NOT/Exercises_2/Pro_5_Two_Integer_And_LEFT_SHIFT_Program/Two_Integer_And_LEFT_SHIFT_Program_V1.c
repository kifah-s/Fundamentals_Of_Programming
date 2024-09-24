

//* Two Integer And LEFT SHIFT Program (Version 1).

/*
 * Write a program that takes an integer input from the
 * user, performs a left shift operation on it by a specified
 * number of positions, and then prints the result.
 */

/*
! Input:
! Please enter an integer: 5
! Please enter the number of positions to left shift: 2

! Output:
! Result of left shift operation: 20
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int n1);
int gettingNumberOfPositionsFun(int n2);
int resultLEFTSHIFToperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0, result = 0;

    // Calling Functions.
    num1 = gettingNumberFun(num1);
    num2 = gettingNumberOfPositionsFun(num2);
    result = resultLEFTSHIFToperationFun(num1, num2, result);

    // Print result.
    printf("Result of LEFT SHIFT operation: %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Integer And LEFT SHIFT Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n1)
{
    printf("Please enter first Integer: ");
    scanf("%d", &n1);

    return n1;
}

// Getting Number Of Positions - Function.
int gettingNumberOfPositionsFun(int n2)
{
    printf("Please enter the number of positions to left shift: ");
    scanf("%d", &n2);

    return n2;
}

// Result LEFT SHIFT Operation - Function.
int resultLEFTSHIFToperationFun(int n1, int n2, int res)
{
    res = n1 << n2;

    return res;
}
//* End Function ..



//* Two Integer And XOR Operation Program (Version 1).

/*
 * Write a program that takes two integer inputs from the 
 * user, performs a bitwise XOR operation on them, and then prints the result.
 */

/*
! Input:
! Please enter first integer: 5
! Please enter second integer: 7

! Output:
! Result of bitwise XOR operation: 2
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int n1);
int gettingSecondNumberFun(int n2);
int resultXORoperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 0, num2 = 0, result = 0;

    // Calling Functions.
    num1 = gettingFirstNumberFun(num1);
    num2 = gettingSecondNumberFun(num2);
    result = resultXORoperationFun(num1, num2, result);

    // Print result.
    printf("Result of bitwise XOR operation: %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Integer And XOR Operation Program (Version 1) ..\n\n");
}

// Getting first number - Function.
int gettingFirstNumberFun(int n1)
{
    printf("Please enter first Integer: ");
    scanf("%d", &n1);

    return n1;
}

// Getting second number - Function.
int gettingSecondNumberFun(int n2)
{
    printf("Please enter second Integer: ");
    scanf("%d", &n2);

    return n2;
}

// Result XOR Operation - Function.
int resultXORoperationFun(int n1, int n2, int res)
{
    res = n1 ^ n2;

    return res;
}
//* End Function ..

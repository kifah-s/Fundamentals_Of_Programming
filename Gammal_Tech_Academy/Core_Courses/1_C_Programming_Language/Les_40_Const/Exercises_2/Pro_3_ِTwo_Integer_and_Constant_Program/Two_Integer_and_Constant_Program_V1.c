

//* Two Integer and Constant Program (Version 1).

/*
 * Write a program that declares two integer variables and
 * a constant integer. Initialize the variables with values of
 * your choice. Use the constant in an arithmetic operation and print the result.
 */

/*
! Output:
! Result of the arithmetic operation : 53;
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int printResultFun(int n1, int n2, const int cN, int r);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 10, num2 = 5, result = 0;
    const int constantNum = 3;

    // Call Function.
    result = printResultFun(num1, num2, constantNum, result);

    // Print result.
    printf("Result of the arithmetic operation : %d", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Integer and Constant Program (Version 1) ..\n\n");
}

// Print Result - Function.
int printResultFun(int n1, int n2, const int cN, int r)
{
    r = (n1 + n2) * cN;

    return r;
}
//* End Function ..

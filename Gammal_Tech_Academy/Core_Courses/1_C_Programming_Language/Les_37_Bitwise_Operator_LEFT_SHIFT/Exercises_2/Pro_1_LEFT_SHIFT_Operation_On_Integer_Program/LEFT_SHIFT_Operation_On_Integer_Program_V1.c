

//* LEFT SHIFT Operation On Integer Program (Version 1).

/*
 * Write a program that performs a left shift operation on an integer.
 */

/*
! Output:
! Result of LEFT SHIFT operation: 10
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int resultLeftShiftOperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 5, num2 = 1, result = 0;

    // Calling Functions.
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
    printf("\n\nYou welcome in LEFT SHIFT Operation On Integer Program (Version 1) ..\n\n");
}

// Result LIFT SHIFT Operation - Function.
int resultLeftShiftOperationFun(int n1, int n2, int res)
{
    res = n1 << n2;

    return res;
}
//* End Function ..

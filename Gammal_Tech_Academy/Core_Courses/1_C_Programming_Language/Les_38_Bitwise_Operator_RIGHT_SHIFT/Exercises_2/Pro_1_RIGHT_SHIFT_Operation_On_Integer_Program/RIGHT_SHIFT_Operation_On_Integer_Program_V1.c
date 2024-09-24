

//* RIGHT SHIFT Operation On Integer Program (Version 1).

/*
 * Write a program that initializes an integer variable x with
 * a value and performs a right shift operation on it by one position. Print the result.
 */

/*
! Output:
! Result of RIGHT SHIFT operation: 2
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int resultRIGHTShiftOperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 5, num2 = 1, result = 0;

    // Calling Functions.
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
    printf("\n\nYou welcome in RIGHT SHIFT Operation On Integer Program (Version 1) ..\n\n");
}

// Result RIGHT SHIFT Operation - Function.
int resultRIGHTShiftOperationFun(int n1, int n2, int res)
{
    res = n1 >> n2;

    return res;
}
//* End Function ..

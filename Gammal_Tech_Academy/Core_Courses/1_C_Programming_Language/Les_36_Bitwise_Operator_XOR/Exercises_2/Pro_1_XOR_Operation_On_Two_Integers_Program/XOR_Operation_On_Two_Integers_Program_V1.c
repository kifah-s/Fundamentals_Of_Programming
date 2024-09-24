

//* XOR Operation On Two Integers Program (Version 1).

/*
 * Write a program that performs bitwise XOR (exclusive OR)
 * operation between two given integers and prints the result.
 */

/*
! Output:
! Result of bitwise OR operation between 5 and 6: 3
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int resultXOROperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 5, num2 = 6, result = 0;

    // Calling Functions.
    result = resultXOROperationFun(num1, num2, result);

    // Print result.
    printf("Result of bitwise XOR operation between %d and %d: %d", num1, num2, result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in XOR Operation On Two Integers Program (Version 1) ..\n\n");
}

// Result XOR Operation - Function.
int resultXOROperationFun(int n1, int n2, int res)
{
    res = n1 ^ n2;

    return res;
}
//* End Function ..

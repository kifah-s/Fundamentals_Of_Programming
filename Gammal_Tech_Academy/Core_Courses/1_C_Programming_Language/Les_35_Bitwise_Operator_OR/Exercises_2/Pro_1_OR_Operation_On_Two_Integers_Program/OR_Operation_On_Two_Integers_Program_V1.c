

//* OR Operation On Two Integers Program (Version 1).

/*
 * Write a program that performs bitwise OR operation
 * between two integers (5 and 80 in this case) and prints the result.
 */

/*
! Output:
! Result of bitwise OR operation between 5 and 80: 85
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int resultOROperationFun(int n1, int n2, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num1 = 5, num2 = 80, result = 0;

    // Calling Functions.
    result = resultOROperationFun(num1, num2, result);

    // Print result.
    printf("Result of bitwise OR operation between %d and %d: %d", num1, num2, result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in OR Operation On Two Integers Program (Version 1) ..\n\n");
}

// Result OR Operation - Function.
int resultOROperationFun(int n1, int n2, int res)
{
    res = n1 | n2;

    return res;
}
//* End Function ..

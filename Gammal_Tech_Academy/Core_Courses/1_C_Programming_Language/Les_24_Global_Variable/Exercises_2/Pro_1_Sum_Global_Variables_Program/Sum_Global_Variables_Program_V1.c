

//* Sum Global Variables Program (Version 1).

/*
 * Write a program that uses global variables x, y, and sum,
 * The program declares these variables globally, initializes x with the value 5 and y with the value 6,
 * calculates the sum of x and y, and then prints the result.
 */

/*
! Output:
! Sum = 11
*/

#include <stdio.h>

//* Global Variables ..
int x, y, sum;
//* End Global Variables ..

void welcomeMessageFun();
void sumTowNumbersFun(int num1, int num2, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Initializes variables.
    x = 5, y = 6;

    // Calling Functions.
    sumTowNumbersFun(x, y, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Global Variables Program (Version 1) ..\n\n");
}

// Sum tow numbers - Function.
void sumTowNumbersFun(int num1, int num2, int sum)
{
    sum = num1 + num2;

    printf("Sum = %d", sum);
}
//* End Function ..

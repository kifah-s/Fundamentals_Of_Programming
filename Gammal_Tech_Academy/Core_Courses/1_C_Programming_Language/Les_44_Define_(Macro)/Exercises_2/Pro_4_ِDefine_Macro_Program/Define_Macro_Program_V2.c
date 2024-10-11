

//* Define Macro Program (Version 2).

/*
 * Define a macro using #define named ADD that takes two parameters and calculates their sum.
 * Create a program that uses this macro to add two numbers and prints the result.
 */

/*
! Output:
! Sum: 12
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define Add(a, b) (a + b) // OR a + b

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num1 = 6, num2 = 6;

    // Print Value.
    printf("Sum: %d", Add(num1, num2));

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro Program (Version 2) ..\n\n");
}
//* End Function ..

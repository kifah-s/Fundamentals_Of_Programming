

//* Define Macro 2 Program (Version 1).

/*
 * Define a macro using #define named MULTIPLY that takes two parameters and calculates their product.
 * Create a program that uses this macro to multiply two numbers and prints the result.
 */

/*
! Output:
! Product: 12
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define MULTIPLY(n1, n2) (n1 * n2) // OR n1 * n2

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num1 = 6, num2 = 2;

    // Print Value.
    printf("Product: %d", MULTIPLY(num1, num2));

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro 2 Program (Version 1) ..\n\n");
}
//* End Function ..

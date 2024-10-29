

//* Define Macro Program (Version 1).

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
#define Add 6 + 6

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Print Value.
    printf("Sum: %d", Add);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro Program (Version 1) ..\n\n");
}
//* End Function ..

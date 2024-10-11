

//* Define Constant Integer Program (Version 1).

/*
 * Define a constant integer using #define named MY_CONSTANT with a value of 42.
 * Create a program that prints the value of this constant.
 */

/*
! Output:
! Constant Value: 42
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define MY_CONSTANT 42

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Print Value.
    printf("Constant Value: %d", MY_CONSTANT);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Constant Integer Program (Version 1) ..\n\n");
}
//* End Function ..

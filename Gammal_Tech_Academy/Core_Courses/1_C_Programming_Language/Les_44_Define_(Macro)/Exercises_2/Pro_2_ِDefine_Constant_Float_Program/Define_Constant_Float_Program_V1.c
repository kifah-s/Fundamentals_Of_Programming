

//* Define Constant Float Program (Version 1).

/*
 * Define a constant float using #define named PI with a value of 3.14.
 * Create a program that prints the value of this constant.
 */

/*
! Output:
! Value Of PI: 3.14
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define PI 3.14

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Print Value.
    printf("Value Of PI: %0.2f", PI);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Constant Float Program (Version 1) ..\n\n");
}
//* End Function ..

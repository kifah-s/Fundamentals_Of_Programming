

//* Define Constant String Program (Version 1).

/*
 * Define a string constant using #define named GREETING with the value "Hello, World!".
 * Create a program that prints the value of this constant.
 */

/*
! Output:
! Hello, World
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define GREETING "Hello, World !!"

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Print Value.
    printf("%s", GREETING);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Constant String Program (Version 1) ..\n\n");
}
//* End Function ..

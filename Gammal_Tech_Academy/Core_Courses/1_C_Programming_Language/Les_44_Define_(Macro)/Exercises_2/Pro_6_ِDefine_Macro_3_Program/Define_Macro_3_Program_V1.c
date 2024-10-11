

//* Define Macro 3 Program (Version 1).

/*
 * Define a macro using #define named SQUARE that takes one parameter and calculates its square.
 * Create a program that uses this macro to find the square of a number and prints the result.
 */

/*
! Output:
! SQUARE: 81
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define SQUARE(s) (s * s) // OR s * s

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 9;

    // Print Value.
    printf("SQUARE: %d", SQUARE(num));

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro 3 Program (Version 1) ..\n\n");
}
//* End Function ..

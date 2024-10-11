

//* Define Macro 7 Program (Version 1).

/*
 * Define a macro using #define named AVERAGE_FLOAT that takes two floating-point parameters and calculates their average.
 * Create a program that uses this macro to find the average and prints the result.
 */

/*
! Output:
! Average: 15.00
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define AVERAGE_FLOAT(p1, p2) ((p1 + p2) / 2) // OR (p1 + p2 + p3) / 3

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    float num1 = 13, num2 = 13;

    // Print Value.
    printf("AVERAGE: %0.2f", AVERAGE_FLOAT(num1, num2));

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro 6 Program (Version 1) ..\n\n");
}
//* End Function ..

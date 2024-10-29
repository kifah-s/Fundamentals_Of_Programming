

//* Define Macro 6 Program (Version 1).

/*
 * Define a macro using #define named AVERAGE that takes three parameters and calculates their average.
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
#define AVERAGE(p1, p2, p3) ((p1 + p2 + p3) / 3) // OR (p1 + p2 + p3) / 3

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    float num1 = 15, num2 = 15, num3 = 15;

    // Print Value.
    printf("AVERAGE: %0.2f", AVERAGE(num1, num2, num3));

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

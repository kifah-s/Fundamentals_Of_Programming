

//* Define Macro 4 Program (Version 1).

/*
 * Define a macro using #define named RECTANGLE_AREA that takes two parameters (length and width),
 * and calculates the area of a rectangle.
 * Create a program that uses this macro to find the area and prints the result.
 */

/*
! Output:
! RECTANGLE AREA: 40
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define RECTANGLE_AREA(len, wid) (len * wid) // OR len * wid

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int length = 5, width = 8;

    // Print Value.
    printf("RECTANGLE AREA: %d", RECTANGLE_AREA(length, width));

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro 4 Program (Version 1) ..\n\n");
}
//* End Function ..

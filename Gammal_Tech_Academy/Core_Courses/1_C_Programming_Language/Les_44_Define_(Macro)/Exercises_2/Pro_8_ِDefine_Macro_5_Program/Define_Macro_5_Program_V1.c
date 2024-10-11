

//* Define Macro 5 Program (Version 1).

/*
 * Define a macro using #define named CUBE_VOLUME that takes one parameter (side),
 * and calculates the volume of a cube.
 * Create a program that uses this macro to find the volume and prints the result.
 */

/*
! Output:
! Cube Volume: 27
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Using Define.
#define CUBE_VOLUME(s) (s * s * s) // OR s * s * s

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int side = 3;

    // Print Value.
    printf("Cube Volume: %d", CUBE_VOLUME(side));

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Define Macro 5 Program (Version 1) ..\n\n");
}
//* End Function ..

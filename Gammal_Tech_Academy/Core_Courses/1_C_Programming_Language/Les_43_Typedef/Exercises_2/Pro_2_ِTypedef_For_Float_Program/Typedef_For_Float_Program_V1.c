

//* Typedef For Float Program (Version 1).

/*
 * Define a typedef for a Float.
 */

/*
! Output:
! Value: 3.14
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef float flo;

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    flo x = 3.14;

    // Print Variable Value.
    printf("Value: %0.2f", x);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Float Program (Version 1) ..\n\n");
}
//* End Function ..

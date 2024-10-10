

//* Typedef For Integer Program (Version 1).

/*
 * Define a typedef for an integer.
 */

/*
! Output:
! Value: 5
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef int integer;

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    integer x = 5;

    // Print Variable Value.
    printf("Value: %d", x);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Integer Program (Version 1) ..\n\n");
}
//* End Function ..

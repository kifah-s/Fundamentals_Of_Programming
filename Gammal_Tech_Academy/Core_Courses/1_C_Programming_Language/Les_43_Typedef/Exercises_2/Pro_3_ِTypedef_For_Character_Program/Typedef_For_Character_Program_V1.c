

//* Typedef For Character Program (Version 1).

/*
 * Define a typedef for a character named Character.
 * Create a program that declares and prints the value of a Character variable.
 */

/*
! Output:
! Character: A
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef char Character;

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    Character x = 'A';

    // Print Variable Value.
    printf("Character: %c", x);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Character Program (Version 1) ..\n\n");
}
//* End Function ..

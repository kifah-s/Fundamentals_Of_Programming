

//* Typedef For Pointer Program (Version 1).

/*
 * Define a typedef for a pointer to an integer named IntegerPointer.
 * Create a program that declares an integer,
 * initializes a pointer to it, and prints the value using the pointer.
 */

/*
! Output:
! Value: 10
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef int *IntegerPointer;

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Pointer.
    IntegerPointer p;

    //  Declare Variable.
    int num = 10;

    // initializes a Pointer to Variable.
    p = &num;

    // Print Value.
    printf("Value: %d", *p);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Pointer Program (Version 1) ..\n\n");
}

//* End Function ..

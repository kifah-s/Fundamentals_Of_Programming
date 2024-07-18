

//* From Zero To Four Program (Version 1).

/*
 * Write a program prints from zero to four.
 */

/*
! Output:
! 0
! 1
! 2
! 3
! 4
*/

#include <stdio.h>

void welcomeMessageFun();
void printFromZeroToFourFun();

int main()
{
    welcomeMessageFun();

    printFromZeroToFourFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From Zero To Four Program (Version 1) ..\n\n");
}

// Print From Zero To Four / Function.
void printFromZeroToFourFun()
{
    // Declare Variables.
    int i = 0;

    while (i < 5)
    {
        printf("%i\n", i);
        i++;
    }
}
//* End Function ..

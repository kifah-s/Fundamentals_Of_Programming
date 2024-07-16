

//* Greater Than 2 Program (Version 1).

/*
 * Write a program using if and for to print numbers from 1 to 5,
 * but only if they are greater than 2.
 */

/*
! Output:
! 3
! 4
! 5
*/

#include <stdio.h>

void welcomeMessageFun();
void greaterThan2Fun(int toN);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int toNumber = 5;
    greaterThan2Fun(toNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 2 Program (Version 1) ..\n\n");
}

// Greater Than 2 function.
void greaterThan2Fun(int toN)
{
    for (int i = 1; i <= toN; i++)
    {
        if (i > 2)
        {
            printf("%i\n", i);
        }
    }
}

//* End Function ..



//* From 10 To -10 Program (Version 1).

/*
 * Write a program to print numbers from 10 to -10 using a do...while loop.
 */

/*
! Output:
! 10 9 8 7 6 5 4 3 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
*/

#include <stdio.h>

void welcomeMessageFun();
void printNumberFrom10To10Fun();

int main()
{
    welcomeMessageFun();
    printNumberFrom10To10Fun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 10 To -10 Program (Version 1) ..\n\n");
}

// Print Number From 10 To -10 / Function.
void printNumberFrom10To10Fun()
{
    // Declare Variables.
    int i = 10;

    do
    {
        printf("%i ", i);
        i--;
    } while (i >= -10);
}
//* End Function ..

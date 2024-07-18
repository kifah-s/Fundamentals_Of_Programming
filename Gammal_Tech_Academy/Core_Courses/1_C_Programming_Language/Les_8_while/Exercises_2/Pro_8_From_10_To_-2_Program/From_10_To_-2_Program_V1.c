

//* From 10 To -2 Program (Version 1).

/*
 * Write a program to print numbers from 10 to -2 using a while loop.
 */

/*
! Output:
! 10 9 8 7 6 5 4 3 2 1 0 -1 -2
*/

#include <stdio.h>

void welcomeMessageFun();
void printNumbersFun();

int main()
{
    welcomeMessageFun();

    printNumbersFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 10 To -2 Program (Version 1) ..\n\n");
}

// Print Numbers / Function.
void printNumbersFun()
{
    // Declare Variables.
    int i = 10;

    while (i >= -2)
    {
        printf("%i ", i);
        i--;
    }
}
//* End Function ..



//* From 1 To 10 Program (Version 1).

/*
 * Write a program that prints numbers from 1 to 10 using a while loop.
 */

/*
! Output:
! 1
! 1
! 2
! 3
! 4
! 5
! 6
! 7
! 8
! 9
! 10
*/

#include <stdio.h>

void welcomeMessageFun();
void printFrom1To10Fun();

int main()
{
    welcomeMessageFun();

    printFrom1To10Fun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome Message / Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 1 To 10 Program (Version 1) ..\n\n");
}

// Print From 1 To 10 / Function.
void printFrom1To10Fun()
{
    // Declare Variables.
    int i = 1;

    while (i <= 10)
    {
        printf("%i ", i);
        i++;
    }
}
//* End Function ..

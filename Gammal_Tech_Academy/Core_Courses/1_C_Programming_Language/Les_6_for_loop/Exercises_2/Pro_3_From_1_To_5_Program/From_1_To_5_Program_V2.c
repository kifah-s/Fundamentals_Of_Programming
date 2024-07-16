

//* From 1 To 5 Program (Version 2).

/*
 * Write a program using a for loop to print numbers from 1 to 5.
 */

/*
! Output:
! 1
! 2
! 3
! 4
! 5
*/

#include <stdio.h>

void welcomeMessageFun();
void printFrom1ToFun();

int main()
{
    welcomeMessageFun();

    printFrom1ToFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 1 To 5 Program (Version 2) ..\n\n");
}

// Print From 1 To 5 function.
void printFrom1ToFun()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%i\n", i);
    }
}
//* End Function ..

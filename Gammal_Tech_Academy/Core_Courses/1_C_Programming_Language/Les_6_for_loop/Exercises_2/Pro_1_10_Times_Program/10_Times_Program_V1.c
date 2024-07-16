

//* 10 Times Program (Version 1).

/*
 * Write a program using a for loop to print the message "Hello Gammal Tech" 10 times.
 */

/*
! Output:
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
*/

#include <stdio.h>

void welcomeMessageFun();
void print10TimesFun();

int main()
{
    welcomeMessageFun();
    print10TimesFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in 10 Times Program (Version 1) ..\n\n");
}

// Print 10 times function.
void print10TimesFun()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Hello Gammal Tech\n");
    }
}
//* End Function ..

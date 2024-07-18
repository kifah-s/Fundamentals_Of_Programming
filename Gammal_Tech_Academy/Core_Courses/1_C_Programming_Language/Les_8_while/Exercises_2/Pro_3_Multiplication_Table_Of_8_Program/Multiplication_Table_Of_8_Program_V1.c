

//* Multiplication Table Of 8 Program (Version 1).

/*
 * Write a program that prints the multiplication table of 8 using a while loop.
 */

/*
! Output:
! 8 * 1 = 8
! 8 * 2 = 16
! 8 * 3 = 24
! 8 * 4 = 32
! 8 * 5 = 40
! 8 * 6 = 48
! 8 * 7 = 56
! 8 * 8 = 64
! 8 * 9 = 72
! 8 * 10 = 80
*/

#include <stdio.h>

void welcomeMessageFun();
void printMultiplicationTableOf8Fun(int n);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 8;

    printMultiplicationTableOf8Fun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiplication Table Of 8 Program (Version 1) ..\n\n");
}

// Print Multiplication Table Of 8 / Function.
void printMultiplicationTableOf8Fun(int n)
{
    // Declare Variables.
    int i = 1;

    while (i <= 10)
    {
        printf("\n%i * %i = %i", n, i, i * n);
        i++;
    }
}
//* End Function ..

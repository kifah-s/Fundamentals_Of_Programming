

//* From 1 To Number Program (Version 2).

/*
 * Write a program using a for loop to print numbers from 1 to a number entered by the user.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
! Hello Gammal Tech
*/

#include <stdio.h>

void welcomeMessageFun();
int enteredNumberFun(int n);
void printManyTimesFun(int n);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 0;

    number = enteredNumberFun(number);
    printManyTimesFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 1 To Number Program (Version 2) ..\n\n");
}

// Entered number function.
int enteredNumberFun(int n)
{
    printf("Please enter a number: ");
    scanf("%i", &n);

    return n;
}

// Print many times function.
void printManyTimesFun(int n)
{
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%i\n", i);
    }
}
//* End Function ..

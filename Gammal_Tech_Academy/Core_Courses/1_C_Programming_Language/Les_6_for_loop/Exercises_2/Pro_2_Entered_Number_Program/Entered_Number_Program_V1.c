

//* Entered Number Program (Version 1).

/*
 * Write a program that prompts the user to enter a number
 * and then prints the message "Hello Gammal Tech" as many times as the entered number.
 */

/*
! Input:
! Please enter a number: 5

! Output:
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
    printf("\n\nYou welcome in Entered Number Program (Version 1) ..\n\n");
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
    for (int i = 0; i < n; i++)
    {
        printf("Hello Gammal Tech\n");
    }
}
//* End Function ..

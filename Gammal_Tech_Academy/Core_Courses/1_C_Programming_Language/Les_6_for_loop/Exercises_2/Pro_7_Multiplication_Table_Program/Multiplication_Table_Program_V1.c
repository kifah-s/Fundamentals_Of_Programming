

//* Multiplication Table Program (Version 1).

/*
 * Write a program using a for loop to create a multiplication table for a user-entered number.
 */

/*
! Input:
! Please enter a number to  generate its multiplication table: 3

! Output:
! multiplication table for the number 5:
! 3 * 1 = 3
! 3 * 2 = 6
! 3 * 3 = 9
! 3 * 4 = 12
! 3 * 5 = 15
! 3 * 6 = 18
! 3 * 7 = 21
! 3 * 8 = 24
! 3 * 9 = 27
! 3 * 10 = 30
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int n);
void multiplicationTableFun(int n);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 0;
    
    number = gettingNumberFun(number);
    multiplicationTableFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in multiplication table Program (Version 1) ..\n\n");
}

// Getting number function.
int gettingNumberFun(int n)
{
    printf("Please enter a number to  generate its multiplication table: ");
    scanf("%i", &n);

    return n;
}

// Multiplication table function.
void multiplicationTableFun(int n)
{
    printf("\nMultiplication table for the number %i:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n", n, i, n * i);
    }
}
//* End Function ..

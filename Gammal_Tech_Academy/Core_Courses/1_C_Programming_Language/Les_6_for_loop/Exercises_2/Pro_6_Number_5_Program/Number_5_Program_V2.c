

//* Number 5 Program (Version 2).

/*
 * Write a program using a for loop to create a multiplication table for the number 5.
 */

/*
! Output:
! multiplication table for the number 5:
! 5 * 1 = 5
! 5 * 2 = 10
! 5 * 3 = 15
! 5 * 4 = 20
! 5 * 5 = 25
! 5 * 6 = 30
! 5 * 7 = 35
! 5 * 8 = 40
! 5 * 9 = 45
! 5 * 10 = 50
*/

#include <stdio.h>

void welcomeMessageFun();
void multiplicationTableFun(int n);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 5;
    multiplicationTableFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number 5 Program (Version 2) ..\n\n");
}

// multiplication table for the number 5 function.
void multiplicationTableFun(int n)
{
    printf("multiplication table for the number 5:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n", n, i, n * i);
    }
}
//* End Function ..

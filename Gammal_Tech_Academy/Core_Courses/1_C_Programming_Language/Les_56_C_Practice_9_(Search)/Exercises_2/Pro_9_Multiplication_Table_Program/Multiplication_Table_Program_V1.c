

//* Multiplication Table Program (Version 1).

/*
 * Write a program to display the multiplication table of a given number.
 */

/*
! Input:
! Please enter a number: 3

! Output:
! Multiplication Table of 3:
! 3 x 1 = 3
! 3 x 2 = 6
! 3 x 3 = 9
! 3 x 4 = 12
! 3 x 5 = 15
! 3 x 6 = 18
! 3 x 7 = 21
! 3 x 8 = 24
! 3 x 9 = 27
! 3 x 10 = 30
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printMultiplicationTableOfNumberFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    printMultiplicationTableOfNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiplication Table Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter the number: ");
    scanf("%d", &num);

    return num;
}

// Print Multiplication Table of number - Function.
void printMultiplicationTableOfNumberFun(int num)
{
    num = receiveNumberFun(num);

    printf("\nMultiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
//* End Function ..
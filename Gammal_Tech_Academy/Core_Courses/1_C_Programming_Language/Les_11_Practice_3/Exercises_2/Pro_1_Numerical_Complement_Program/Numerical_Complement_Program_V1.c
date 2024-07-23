

//* Numerical Complement Program (Version 1).

/*
 * Write a program that calculates the numerical complement of a given number with respect to 10,
 * For example, the complement of 6 with respect to 10 is 4.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! The complement of 6 with respect 10 is 4.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void numericalComplementFun(int num, int comNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, complementNumber = 0;

    numericalComplementFun(number, complementNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Numerical Complement Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Numerical Complement - Function.
void numericalComplementFun(int num, int comNum)
{
    num = gettingNumberFun(num);

    comNum = 10 - num;

    printf("\nThe complement of %i with respect 10 is %i.", num, comNum);
}

//* End Function ..

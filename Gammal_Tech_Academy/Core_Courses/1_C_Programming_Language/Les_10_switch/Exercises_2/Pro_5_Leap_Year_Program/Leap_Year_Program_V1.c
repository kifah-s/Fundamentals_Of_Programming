

//* Leap Year Program (Version 1).

/*
 * Write a program to input a year and check if it is a leap year.
 */

/*
! Input:
! Please enter a year: 2016

! Output:
! 2016 is a leap year.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkLeapYearFun(int y);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int year = 0;

    year = gettingNumberFun(year);
    checkLeapYearFun(year);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Leap Year Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a year: ");
    scanf("%i", &num);

    return num;
}

// Check leap year - Function.
void checkLeapYearFun(int y)
{
    switch ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
    case 1:
        printf("\n%i is a leap year.", y);
        break;

    case 0:
        printf("\n%i is Not a leap year.", y);
        break;
    }
}
//* End Function ..

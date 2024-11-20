

//* Leap Year Program (Version 1).

/*
 * Write a program that checks if a given year is a leap year.
 */

/*
! Input:
! Please Enter a Year: 2004

! Output:
! 2004 is a leap Year.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkYearFun(int year);

int main()
{
    // Declare Variables.
    int myYear = 0;

    // Call Functions.
    checkYearFun(myYear);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Leap Year Program (Version 1) ..\n\n");
}

// Receive Year - Function.
int receiveYearFun(int year)
{
    printf("Please enter a Year: ");
    scanf("%d", &year);

    return year;
}

// Check Year - Function.
void checkYearFun(int year)
{
    welcomeMessageFun();
    year = receiveYearFun(year);

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        printf("\n%d is a Leap Year\n\n");
    }
    else
    {
        printf("\n%d is Not a Leap Year\n\n");
    }
}

//* End Function ..



//* Weekend or Weekday Program (Version 1).

/*
 * Write a program that checks if a given day of the week is a weekend or a weekday.
/*
! Input:
! Please Enter the the day of the week(1 - 7): 6

! Output:
! Weekend
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkDayFun(int day);

int main()
{
    // Declare Variables.
    int myDay = 0;

    // Call Functions.
    checkDayFun(myDay);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Weekend or Weekday Program (Version 1) ..\n\n");
}

// Receive Day - Function.
int receiveDayFun(int day)
{
    printf("Please Enter the the day of the week(1 - 7): ");
    scanf("%d", &day);

    return day;
}

// Check Day - Function.
void checkDayFun(int day)
{
    welcomeMessageFun();
    day = receiveDayFun(day);

    switch (day)
    {
    case 1 ... 5:
        printf("\nWeekday.\n\n");
        break;

    case 6 ... 7:
        printf("\nWeekend.\n\n");
        break;

    default:
        printf("\nInValid Day.\n\n");
        break;
    }
}

//* End Function ..



//* Date Program (Version 1).

/*
 * Write a program that uses a struct to represent a date with members day,
 * month, and year. Prompt the user to enter a date, store it in a struct variable, and print the date.
 */

/*
! Input:
! Please enter day: 29
! Please enter month: 5
! Please enter year: 2003

! Output:
! Entered date: 29 / 5 / 2003
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Date
{
    int day,
        month,
        year;
};
//* End Struct

void welcomeMessageFun();
void dateFun(struct Date d);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Date date1;

    // Calling Functions.
    dateFun(date1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Date Program (Version 1) ..\n\n");
}

//  Date - Function.
void dateFun(struct Date d)
{
    printf("Please enter day: ");
    scanf("%d", &d.day);

    printf("Please enter month: ");
    scanf("%d", &d.month);

    printf("Please enter year: ");
    scanf("%d", &d.year);

    printf("\nEntered date: %d / %d / %d", d.day, d.month, d.year);
}

//* End Function ..

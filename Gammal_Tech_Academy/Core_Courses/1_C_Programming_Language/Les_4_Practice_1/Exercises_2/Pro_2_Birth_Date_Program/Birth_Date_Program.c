

//* Birth Date Program.

//* Write a program that asks the user for their birth date (day, month, year).

/*
! Input:
! Enter your birth date (day, month, year): 29-5-2003

! Output:
! Your birth date is: 29/5/2003
*/

#include <stdio.h>

void welcomeMessageFun();

void printBirthDateFun(int d, int m, int y);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int day, month, year;

    printf("Please enter Birth Date: ");
    scanf("%i %*c %i %*c %i", &day, &month, &year);

    printBirthDateFun(day, month, year);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Birth Date Program ..\n\n");
}

// Print Birth Date function.
void printBirthDateFun(int d, int m, int y)
{
    printf("\nYour birth date is: %i/%i/%i", d, m, y);
}
//* End Function ..

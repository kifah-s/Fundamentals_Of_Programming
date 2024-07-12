

//* Birth Year Program.

//* Write a program that asks the user for their age, calculates and prints their birth year.

/*
! Input:
! Please enter your age: 20

! Output:
! Your birth date is: 2004
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingAgeFun(int age);
void calcBirthYearFun(int age, int birYear);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int age = 0, birthYear = 0;

    age = gettingAgeFun(age);
    calcBirthYearFun(age, birthYear);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Birth Year Program ..\n\n");
}

// Getting Age Function.
int gettingAgeFun(int age)
{
    printf("Please Enter your Age: ");
    scanf("%i", &age);

    return age;
}

// calc Birth Year Function.
void calcBirthYearFun(int age, int birYear)
{
    birYear = 2024 - age;
    printf("\nYour Birth Date is: %i", birYear);
}

//* End Function ..

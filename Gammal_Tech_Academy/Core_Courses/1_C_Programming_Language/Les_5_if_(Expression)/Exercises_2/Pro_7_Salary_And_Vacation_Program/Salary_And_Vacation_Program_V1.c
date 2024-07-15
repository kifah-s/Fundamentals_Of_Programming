

//* Salary And Vacation Program (Version 1).

/*
 * Write a program that prompts the user to enter their salary and the number of vacation days in a year.
 * If the number of vacation days is less than or equal to 21, add 10000 to the salary,
 * otherwise, add 5000. Print the annual increment and the new salary.
 */

/*
! Input:
! Please enter salary: 30000
! Please enter number of vacation days: 20

! Output:
! Increment: 10000
! New salary: 40000
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingSalaryFun(int sal);
int gettingVacationDaysFun(int vacDays);
void calculatingNewSalaryFun(int sal, int vacDays);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int salary = 0, vacationDays = 0;

    salary = gettingSalaryFun(salary);
    vacationDays = gettingVacationDaysFun(vacationDays);
    calculatingNewSalaryFun(salary, vacationDays);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Salary And Vacation Program (Version 1) ..\n\n");
}

// Getting Salary function.
int gettingSalaryFun(int sal)
{
    printf("Please Enter salary: ");
    scanf("%i", &sal);

    return sal;
}

// Getting Vacation Days function.
int gettingVacationDaysFun(int vacDays)
{
    printf("Please enter number of vacation days: ");
    scanf("%i", &vacDays);

    return vacDays;
}

// calculating new salary function.
void calculatingNewSalaryFun(int sal, int vacDays)
{
    // Declare variables.
    int increment_1 = 10000, increment_2 = 5000, newSalary = 0;

    if (vacDays <= 21)
    {
        newSalary = sal + increment_1;
        printf("\nIncrement: %i", increment_1);
        printf("\nNew salary: %i", newSalary);
    }
    else
    {
        newSalary = sal + increment_2;
        printf("\nIncrement: %i", increment_2);
        printf("\nNew salary: %i", newSalary);
    }
}

//* End Function ..

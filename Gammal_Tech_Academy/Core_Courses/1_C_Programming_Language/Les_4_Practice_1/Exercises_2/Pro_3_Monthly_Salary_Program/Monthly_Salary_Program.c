

//* Monthly Salary Program.

//* Write a program that asks the user for their monthly salary, calculates the annual salary, and prints it.

/*
! Input:
! Enter your Monthly Salary: 1000

! Output:
! Your annual salary is: 12000
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingMonthlySalaryFun(int monSal);
void calcAnnualSalaryFun(int monSal, int annSal);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int monthlySalary = 0, annualSalary = 0;

    monthlySalary = gettingMonthlySalaryFun(monthlySalary);
    calcAnnualSalaryFun(monthlySalary, annualSalary);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Monthly Salary Program ..\n\n");
}

// Getting Monthly Salary Function.
int gettingMonthlySalaryFun(int monSal)
{
    printf("Please Enter your Monthly Salary: ");
    scanf("%i", &monSal);

    return monSal;
}

// calc annual salary Function.
void calcAnnualSalaryFun(int monSal, int annSal)
{
    annSal = monSal * 12;
    printf("\nYour annual salary is: %i", annSal);
}

//* End Function ..



/* >>> Salary Program ( Version 6 ) <<< */

/* >>> Type a program that asks a person to enter the value of his or her salary and the number of days off during the year, if the number of days is less than or equal to 21 is added to the salary 10,000 pounds, if more than 21 the increase is 5000 pounds, and prints the value of the annual increase and the value of the new salary on the screen <<< */

#include <stdio.h>

void welcomeMassageFun();
int yearSalaryFun();
int numberDayOffsFun();
int salaryFun();

int main()
{
    welcomeMassageFun();

    salaryFun();

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Salary Program ( Version 6 ) ..\n\n");
}

// year salary function;
int yearSalaryFun()
{
    int yearSalary;
    printf("Please enter this year salary : ");
    scanf("%d", &yearSalary);
    return yearSalary;
}

// number day offs function;
int numberDayOffsFun()
{
    int numberDayOffs;
    printf("Please enter the number days offs : ");
    scanf("%d", &numberDayOffs);
    return numberDayOffs;
}

// Salary functions;
int salaryFun()
{
    int yearSalary = yearSalaryFun();
    int numberDayOffs = numberDayOffsFun();
    
    int increaseValue1 = 10000,
        increaseValue2 = 5000;

    if (numberDayOffs <= 21)
    {
        yearSalary = yearSalary + increaseValue1;
        printf("\nYear increase = %d\n\n", increaseValue1);
        printf("Salary value = %d\n\n\n\n", yearSalary);
    }
    else
    {
        yearSalary = yearSalary + increaseValue2;
        printf("\nYear increase = %d\n\n", increaseValue2);
        printf("Salary value = %d\n\n\n", yearSalary);
    }
}
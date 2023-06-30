

/* >>> Salary Program ( Version 4 ) <<< */

/* >>> Type a program that asks a person to enter the value of his or her salary and the number of days off during the year, if the number of days is less than or equal to 21 is added to the salary 10,000 pounds, if more than 21 the increase is 5000 pounds, and prints the value of the annual increase and the value of the new salary on the screen <<< */

#include <stdio.h>

void welcomeMassageFun();
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
    printf("\n\nYou welcome in Salary Program ( Version 4 ) ..\n\n");
}

// Salary functions;
int salaryFun()
{
    int salary_v, number_d,
        increase_value1 = 10000,
        increase_value2 = 5000;

    printf("Please enter this year salary : ");
    scanf("%d", &salary_v);

    printf("Please enter the number days offs : ");
    scanf("%d", &number_d);

    if (number_d <= 21)
    {
        salary_v = salary_v + increase_value1;
        printf("\nYear increase = %d\n\n", increase_value1);
        printf("Salary value = %d\n\n\n\n", salary_v);
    }
    else
    {
        salary_v = salary_v + increase_value2;
        printf("\nYear increase = %d\n\n", increase_value2);
        printf("Salary value = %d\n\n\n", salary_v);
    }
}


/* >>> Salary Program ( Version 1 ) <<< */

/* >>> Type a program that asks a person to enter the value of his or her salary and the number of days off during the year, if the number of days is less than or equal to 21 is added to the salary 10,000 pounds, if more than 21 the increase is 5000 pounds, and prints the value of the annual increase and the value of the new salary on the screen <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Salary Program ( Version 1 ) ..\n\n");

    int salary_v, number_d;

    printf("Please enter this year salary : ");
    scanf("%d", &salary_v);

    printf("Please enter the number days offs : ");
    scanf("%d", &number_d);

    if (number_d <= 21)
    {
        salary_v = salary_v + 10000;
        printf("\nYear increase = 10000\n\n");
        printf("Salary value = %d\n\n\n", salary_v);
    }
    else
    {
        salary_v = salary_v + 5000;
        printf("\nYear increase = 5000\n\n");
        printf("Salary value = %d\n\n\n", salary_v);
    }

    return 0;
}
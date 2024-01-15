

/* >>> Staff Program ( Version 1 ) <<< */

/* >>> Staff Program : To encourage employees to work collectively, a company has made a bonus for employees who come to work on the same time, if two employees attend at the same time take a bonus, but if an employee comes and the other one is delayed, no one takes a bonus.
Required: Write a program that asks the user to enter the first two numbers that reflect the date of attendance of the first and second staff member that reflects the date of attendance of the second staff member. If the numbers are equal, they print "same time", if the numbers are different, they print "No bonus". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Staff Program ( Version 1 )..\n\n");

    int emp_1, emp_2;

    printf("Existence time first employee ? ");
    scanf("%d", &emp_1);

    printf("Existence time second employee ? ");
    scanf("%d", &emp_2);

    if (emp_1 == emp_2)
    {
        printf("\nBonus\n\n\n");
    }
    else
    {
        printf("\nNo bonus\n\n\n");
    }

    return 0;
}


/* >>> Staff Program ( Version 4 ) <<< */

/* >>> Staff Program : To encourage employees to work collectively, a company has made a bonus for employees who come to work on the same time, if two employees attend at the same time take a bonus, but if an employee comes and the other one is delayed, no one takes a bonus.
Required: Write a program that asks the user to enter the first two numbers that reflect the date of attendance of the first and second staff member that reflects the date of attendance of the second staff member. If the numbers are equal, they print "same time", if the numbers are different, they print "No bonus". <<< */

#include <stdio.h>

void welcomeMassageFun();
int employee1Fun();
int employee2Fun();
int staffFun();

int main()
{
    welcomeMassageFun();

    staffFun();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Staff Program ( Version 4 )..\n\n");
}

// employee 1 function;
int employee1Fun()
{
    int emp1;
    printf("Existence time first employee ? ");
    scanf("%d", &emp1);
    return emp1;
}

// employee 2 function;
int employee2Fun()
{
    int emp2;
    printf("Existence time first employee ? ");
    scanf("%d", &emp2);
    return emp2;
}

// staff function;
int staffFun()
{
    int emp1 = employee1Fun();
    int emp2 = employee2Fun();

    if (emp1 == emp2)
    {
        printf("\nBonus\n\n\n");
    }
    else
    {
        printf("\nNo bonus\n\n\n");
    }
}
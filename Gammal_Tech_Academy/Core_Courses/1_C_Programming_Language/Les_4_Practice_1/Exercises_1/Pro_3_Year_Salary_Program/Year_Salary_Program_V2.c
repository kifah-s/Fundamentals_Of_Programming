

/* >>> Year Salary Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter the value of his monthly salary and then calculates the value of his annual salary and prints it on the screen. <<< */

#include <stdio.h>

void welMasFun();
int yearSalary();

int main()
{
    welMasFun();
    yearSalary();
    
    return 0;
}

// Functions ..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Year Salary Program ( Version 2 ) ..\n\n");
}

// Year Salary function
int yearSalary()
{
    int month,
        year;

    printf("The month salary : ");
    scanf("%d", &month);
    year = month * 12;
    printf("\nThe year salary : %d $\n\n\n", year);
}
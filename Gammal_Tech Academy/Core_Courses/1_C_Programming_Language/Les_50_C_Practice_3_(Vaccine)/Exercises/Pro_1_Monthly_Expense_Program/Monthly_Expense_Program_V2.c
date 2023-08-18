

/* >>> Monthly Expense Program ( Version 2 ) <<< */

/* >>> A program that reads 4 numbers from the user. The first number represents the total expense, the second number represents the number of children in the primary, the third number represents the number of children in highschool, the fourth number represents the number of children in a secondary. Assuming that the student in the primary  takes 200 and in the highchool 400 and in the secondary 600 if the first number is enough for all the children to print "enough" and if it is insufficient to print "not enough". <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int monthlyExpenseFun();
int boysPrimarySchoolFun();
int boysMyPreparationFun();
int boysSecondarySchoolFun();
int expenseAccount();

int main()
{
    welcomeMassageFun();

    expenseAccount();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Monthly Expense Program ( Version 2 ) ..\n\n");
}

// Get monthly Expense Function;
int monthlyExpenseFun()
{
    int monthlyExpense = 0;
    printf("Please enter monthly Expense : ");
    scanf("%d", &monthlyExpense);

    return monthlyExpense;
}

// Get boys primary school function;
int boysPrimarySchoolFun()
{
    int boysPrimarySchool = 0;
    printf("\nPlease enter boys primary school : ");
    scanf("%d", &boysPrimarySchool);

    return boysPrimarySchool;
}

// Get boys my preparation function;
int boysMyPreparationFun()
{
    int boysMyPreparation = 0;
    printf("Please enter boys my preparation : ");
    scanf("%d", &boysMyPreparation);

    return boysMyPreparation;
}

// Get boys secondary school function;
int boysSecondarySchoolFun()
{
    int boysSecondarySchool = 0;
    printf("Please enter boys secondary school : ");
    scanf("%d", &boysSecondarySchool);

    return boysSecondarySchool;
}

// Expense account function;
int expenseAccount()
{
    int monthlyExpense = monthlyExpenseFun();
    int boysPrimarySchool = boysPrimarySchoolFun();
    int boysMyPreparation = boysMyPreparationFun();
    int boysSecondarySchool = boysSecondarySchoolFun();

    if (monthlyExpense >= (boysPrimarySchool * 200) + (boysMyPreparation * 400) + (boysSecondarySchool * 600))
    {
        printf("\nEnough\n\n\n");
    }
    else
    {
        printf("\nNot Enough\n\n\n");
    }
}

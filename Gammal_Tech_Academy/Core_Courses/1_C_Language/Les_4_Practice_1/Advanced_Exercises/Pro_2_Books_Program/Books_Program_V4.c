

/* >>> Books Program ( Version 4 ) <<< */

/* >>> It is necessary to read books from time to time in order to increase and increase your information.
Required : Write a program that asks the user to enter the number of books he reads daily and then tells him if he continues at the same level, he will read how many books at the end of the month. <<< */

#include <stdio.h>

void welMasFun();
int bookMonthFun();
int bookYearFun(int b_month);

int main()
{

    welMasFun();

    int b_month = bookMonthFun();
    bookYearFun(b_month);

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Books program ( Version 4 ) ..\n\n");
}

// Book in month function;
int bookMonthFun()
{
    int b_month;
    printf("How many book read in one month ? ");
    scanf("%d", &b_month);
    return b_month;
}

// Book in year function;
int bookYearFun(int b_month)
{
    int b_year = b_month * 12;
    printf("\nYou will read \" %d \" Books in one year\n\n\n", b_year);
}
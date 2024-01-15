

/* >>> Books Program ( Version 2 ) <<< */

/* >>> It is necessary to read books from time to time in order to increase and increase your information.
Required : Write a program that asks the user to enter the number of books he reads daily and then tells him if he continues at the same level, he will read how many books at the end of the month. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Books Program ( Version 2 ) ..\n\n");

    int B_month;

    printf("How many book read in one month ? ");
    scanf("%d", &B_month);

    printf("\nYou will read \" %d \" Books in one year\n\n\n", B_month * 12);

    return 0;
}
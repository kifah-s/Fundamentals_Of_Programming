

/* >>> Gammal Tech Students Program ( Version 1 ) <<< */

/* >>> Gammal Tech Students Program : Some subscribers on gammal tech are keen to excel and be one of the world's most powerful programmers. After completing their lesson, they continue to resolve questions and exercises throughout the day.
Required: Write a program that asks  the user to enter a number expressing the number of visits to the site if more than 20 times printed "Excellent" <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Gammal Tech Students Program ( Version 1 ) ..\n\n");

    int number;

    printf("Number of visits to the site ? ");
    scanf("%d", &number);

    if (number > 20)
    {
        printf("\nExcellent\n\n\n");
    }
    else
    {
        printf("\nTo be special, you must study more\n\n\n");
    }

    return 0;
}
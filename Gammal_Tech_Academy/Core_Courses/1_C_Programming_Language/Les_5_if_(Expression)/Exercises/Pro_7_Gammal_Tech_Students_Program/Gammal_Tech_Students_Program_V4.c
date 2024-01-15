

/* >>> Gammal Tech Students Program ( Version 4 ) <<< */

/* >>> Gammal Tech Students Program : Some subscribers on gammal tech are keen to excel and be one of the world's most powerful programmers. After completing their lesson, they continue to resolve questions and exercises throughout the day.
Required: Write a program that asks  the user to enter a number expressing the number of visits to the site if more than 30 times printed "Excellent" <<< */

#include <stdio.h>

void welcomeMassageFun();
int visitsFun();
int studentsFun();

int main()
{
    welcomeMassageFun();

    studentsFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Gammal Tech Students Program ( Version 4 ) ..\n\n");
}

// visits function;
int visitsFun()
{
    int number;
    printf("Number of visits to the site ? ");
    scanf("%d", &number);
    return number;
}

// Students functions;
int studentsFun()
{
    int number = visitsFun();

    if (number > 20)
    {
        printf("\nExcellent\n\n\n");
    }
    else
    {
        printf("\nTo be special, you must study more\n\n\n");
    }
}
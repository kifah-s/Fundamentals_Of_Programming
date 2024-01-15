

/* >>> Week Days Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter the number of a day of the week from 1 to 7 and prints the name of the day this week where Saturday is day number 1 (using switch). <<< */

#include <stdio.h>

void welcomeMassageFun();
int weekDaysFun();

int main()
{
    welcomeMassageFun();
    weekDaysFun();
    
    return 0;
}

// Function;
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Week Days Program ( Version 2 ) ..\n\n");
}

// Week Days function;
int weekDaysFun()
{
    int num;
    printf("Please enter a number from 1 to 7 : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\nSaturday");
        break;

    case 2:
        printf("\nSunday");
        break;

    case 3:
        printf("\nMonday");
        break;

    case 4:
        printf("\nTuesday");
        break;

    case 5:
        printf("\nWednesday");
        break;

    case 6:
        printf("\nThursday");
        break;

    case 7:
        printf("\nFriday");
        break;

    default:
        printf("\ndays week just 7");
        break;
    }

    printf("\n\n\n");
}
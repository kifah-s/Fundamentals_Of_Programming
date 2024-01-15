

/* >>> From 1 To 10 Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter the number from 1 to 10 and prints this number with the name of the number (using the switch). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From 1 To 10 Program ( Version 1 ) ..\n\n");

    int num;
    printf("Please enter a number from 1 to 10 : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\n%d : One", num);
        break;

    case 2:
        printf("\n%d : Two", num);
        break;

    case 3:
        printf("\n%d : Three", num);
        break;

    case 4:
        printf("\n%d : Four", num);
        break;

    case 5:
        printf("\n%d : Five", num);
        break;

    case 6:
        printf("\n%d : Six", num);
        break;

    case 7:
        printf("\n%d : Seven", num);
        break;

    case 8:
        printf("\n%d : Eight", num);
        break;

    case 9:
        printf("\n%d : Nine", num);
        break;

    case 10:
        printf("\n%d : Ten", num);
        break;

    default:
        printf("\nThis is number not for from 1 to 10");
        break;
    }

    printf("\n\n\n");

    return 0;
}
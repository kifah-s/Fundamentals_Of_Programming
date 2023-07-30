

/* >>> Elevator Program ( Version 2 ) <<< */

/* >>> Elevator Program : Some elevators should not be entered by more than 5 people and their total weight should be less than 500 kilos so that the elevator does not collapse.
Required : Write a program that asks a person to enter 5 numbers and collect them, if the total is greater than 500 prints "Error, more than 500 kg", and if the total is less than or equal to 500 prints "Okay" <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in the Elevator Program ( Version 2 )\n\n");

    int w1, w2, w3, w4, w5, result;

    printf("Attention, the weight inside the elevator should not exceed 500kg\n\n");

    printf("Please, enter the weight 1 : ");
    scanf("%d", &w1);

    printf("Please, enter the weight 2 : ");
    scanf("%d", &w2);

    printf("Please, enter the weight 3 : ");
    scanf("%d", &w3);

    printf("Please, enter the weight 4 : ");
    scanf("%d", &w4);

    printf("Please, enter the weight 5 : ");
    scanf("%d", &w5);

    result = w1 + w2 + w3 + w4 + w5;

    if (result <= 500)
    {
        printf("\nOkay\n\n\n");
    }
    else
    {
        printf("\nError, more than 500 kg\n\n\n");
    }

    return 0;
}
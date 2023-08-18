

/* >>> Elevator Program ( Version 3 ) <<< */

/* >>> Elevator Program : Some elevators should not be entered by more than 5 people and their total weight should be less than 500 kilos so that the elevator does not collapse.
Required : Write a program that asks a person to enter 5 numbers and collect them, if the total is greater than 500 prints "Error, more than 500 kg", and if the total is less than or equal to 500 prints "Okay" <<< */

#include <stdio.h>

void welcomeMassageFun();
int elevatorFun();

int main()
{
    welcomeMassageFun();
    elevatorFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Elevator Program ( Version 3 )\n\n");
}

// Elevator function;
int elevatorFun()
{
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

    if (result > 500)
    {
        printf("\nError, more than 500 kg\n\n\n");
    }
    else
    {
        printf("\nOkay\n\n\n");
    }
}
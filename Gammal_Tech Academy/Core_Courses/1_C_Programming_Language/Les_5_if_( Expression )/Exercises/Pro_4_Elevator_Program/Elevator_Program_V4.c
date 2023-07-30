

/* >>> Elevator Program ( Version 4 ) <<< */

/* >>> Elevator Program : Some elevators should not be entered by more than 5 people and their total weight should be less than 500 kilos so that the elevator does not collapse.
Required : Write a program that asks a person to enter 5 numbers and collect them, if the total is greater than 500 prints "Error, more than 500 kg", and if the total is less than or equal to 500 prints "Okay" <<< */

#include <stdio.h>

void welcomeMassageFun();
int weight1Fun();
int weight2Fun();
int weight3Fun();
int weight4Fun();
int weight5Fun();
int elevatorFun(int w1, int w2, int w3, int w4, int w5);

int main()
{
    welcomeMassageFun();

    int w1 = weight1Fun();
    int w2 = weight2Fun();
    int w3 = weight3Fun();
    int w4 = weight4Fun();
    int w5 = weight5Fun();
    
    elevatorFun(w1, w2, w3, w4, w5);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Elevator Program ( Version 4 )\n\n");
}

// weight 1 function;
int weight1Fun()
{
    int w1;
    printf("Attention, the weight inside the elevator should not exceed 500kg\n\n");
    printf("Please, enter the weight 1 : ");
    scanf("%d", &w1);
    return w1;
}

// weight 2 function;
int weight2Fun()
{
    int w2;
    printf("Please, enter the weight 2 : ");
    scanf("%d", &w2);
    return w2;
}

// weight 3 function;
int weight3Fun()
{
    int w3;
    printf("Please, enter the weight 3 : ");
    scanf("%d", &w3);
    return w3;
}

// weight 4 function;
int weight4Fun()
{
    int w4;
    printf("Please, enter the weight 4 : ");
    scanf("%d", &w4);
    return w4;
}

// weight 5 function;
int weight5Fun()
{
    int w5;
    printf("Please, enter the weight 5 : ");
    scanf("%d", &w5);
    return w5;
}

// Elevator function;
int elevatorFun(int w1, int w2, int w3, int w4, int w5)
{
    int result = w1 + w2 + w3 + w4 + w5;

    if (result > 500)
    {
        printf("\nError, more than 500 kg\n\n\n");
    }
    else
    {
        printf("\nOkay\n\n\n");
    }
}
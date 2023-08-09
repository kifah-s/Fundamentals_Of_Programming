

/* >>> Change Value Using Function Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter two values, its function is to replace the values that the user entered (using function). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void receiveValueFun(int *num1, int *num2);
void swapValueFun(int *num1, int *num2);

int main()
{
    welcomeMassageFun();

    // Declare variables;
    int num1 = 0, num2 = 0;

    // Receive value from user;
    receiveValueFun(&num1, &num2);

    // Printing value befor swap;
    printf("\nBefor swap : \n");
    printf("Num 1 = %d , Num 2 = %d\n\n", num1, num2);

    // Swap function;
    swapValueFun(&num1, &num2);

    // Printing value After swap;
    printf("After swap : \n");
    printf("Num 1 = %d , Num 2 = %d\n\n", num1, num2);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Change Value Using Function Program ( Version 3 ) ..\n\n");
}

// Receive value function;
void receiveValueFun(int *num1, int *num2)
{
    // Receive value from user;
    printf("Please enter two numbers : \n");
    printf("Number 1 : ");
    scanf("%d", &*num1);
    printf("Number 2 : ");
    scanf("%d", &*num2);
}

// Swap value function;
void swapValueFun(int *num1, int *num2)
{
    int swappingVariable = 0;

    // Swap value of the variables;
    swappingVariable = *num1;
    *num1 = *num2;
    *num2 = swappingVariable;
}



/* >>> Change Value Using Function Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter two values, its function is to replace the values that the user entered (using function). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void swapValueFun();

int main()
{
    welcomeMassageFun();
    swapValueFun();
    
    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Change Value Using Function Program ( Version 1 ) ..\n\n");
}

// Swap value function;
void swapValueFun()
{
    // Declare variables;
    int num1 = 0, num2 = 0, swappingVariable = 0;

    // Receive value from user;
    printf("Please enter two numbers : \n");

    printf("Number 1 : ");
    scanf("%d", &num1);

    printf("Number 2 : ");
    scanf("%d", &num2);

    // Printing value befor swap;
    printf("\nBefor swap : \n");
    printf("Num 1 = %d , Num 2 = %d\n\n", num1, num2);

    // Swap value of the variables;
    swappingVariable = num1;
    num1 = num2;
    num2 = swappingVariable;

    // Printing value after swap;
    printf("After swap : \n");
    printf("Num 1 = %d , Num 2 = %d\n\n", num1, num2);
}
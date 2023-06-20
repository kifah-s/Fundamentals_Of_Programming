

/* >>> Mathematical Calculations Program ( Version 2 ) <<< */

/* >>> A program that takes 4 numbers from the user and combines the first two numbers, then subtracts the third number, then multiplies it by the fourth number and prints the result. <<< */

#include <stdio.h>

void wel_mas_function();
void math_calc_fun();

int main()
{
    wel_mas_function();
    math_calc_fun();

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Mathematical Calculations Program ( Version 2 ) ..\n\n");
}

// Mathematical Calculations function;
void math_calc_fun()
{
    int num_1,
        num_2,
        num_3,
        num_4,
        result;

    printf("Enter the first number : ");
    scanf("%d", &num_1);

    printf("Enter the second number : ");
    scanf("%d", &num_2);

    printf("Enter the third number : ");
    scanf("%d", &num_3);

    printf("Enter the forth number : ");
    scanf("%d", &num_4);

    result = (num_1 + num_2 - num_3) * num_4;

    printf("\nResult is : %d\n\n\n", result);
}


/* >>> Multiplication Of Two Numbers Program ( Version 5 ) <<< */

/* >>> A program that  records two numbers in two variables and prints the value of their multiplier <<< */

#include <stdio.h>

void wel_mas_function();
void mul_two_num_fun();

int main()
{
    wel_mas_function();
    mul_two_num_fun();

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Multiplication Of Two Numbers Program ( Version 5 ) ..\n\n");
}

void mul_two_num_fun()
{
    int num_1 = 5;
    int num_2 = 10;
    int result = num_1 * num_2;
    printf("Result Multiplication the two numbers is : %d\n\n\n", result);
}
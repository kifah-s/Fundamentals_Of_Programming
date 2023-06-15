

/* >>> Multiplication Of Two Numbers Program - ( Version - 5 ) <<< */

/* >>> A program that  records two numbers in two variables and prints the value of their multiplier <<< */

#include <stdio.h>

char wel_mas_fun();
int mul_num_fun(int num_1, int num_2);
void res_mas_fun(int result);

int main()
{
    wel_mas_fun();
    res_mas_fun(mul_num_fun(10, 5));
}

// Functions..

// Welcome massage function;
char wel_mas_fun()
{
    printf("\n\nYou welcome in Multiplication Of Two Numbers Program - ( Version - 5 ) ..\n\n");
}

// Multiplication number function;
int mul_num_fun(int num_1, int num_2)
{
    int res_mul = num_1 * num_2;
    return res_mul;
}

// Result massage function;
void res_mas_fun(int result)
{
    printf("Result Multiplication the two numbers is : %d\n\n\n", result);
}
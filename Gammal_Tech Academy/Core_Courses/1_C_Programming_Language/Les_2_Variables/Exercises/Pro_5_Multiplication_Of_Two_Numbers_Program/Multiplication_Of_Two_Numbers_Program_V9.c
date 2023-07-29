

/* >>> Multiplication Of Two Numbers Program ( Version 9 ) <<< */

/* >>> A program that  records two numbers in two variables and prints the value of their multiplier <<< */

#include <stdio.h>

char wel_mas_fun();
int mul_num_fun(int num_1, int num_2);
char res_mas_fun(int result);

int main()
{
    wel_mas_fun();
    int mul_num = mul_num_fun(10, 5);
    res_mas_fun(mul_num);

    return 0;
}

// Functions..

// Welcome massage function;
char wel_mas_fun()
{
    printf("\n\nYou welcome in Multiplication Of Two Numbers Program ( Version 9 ) ..\n\n");
}

// Multiplication number function;
int mul_num_fun(int num_1, int num_2)
{
    int res_mul = num_1 * num_2;
    return res_mul;
}

// Result massage function;
char res_mas_fun(int result)
{
    printf("Result Multiplication the two numbers is : %d\n\n\n", result);
}
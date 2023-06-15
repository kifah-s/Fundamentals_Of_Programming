

/* >>> Multiplication Of Two Numbers Program - ( Version - 6 ) <<< */

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
    char wel_mas[] = "\n\nYou welcome in Multiplication Of Two Numbers Program - ( Version - 6 ) ..\n\n";
    printf(wel_mas);
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

    char res_mas[] = {"Result Multiplication the two numbers is : %hhd\n\n\n", result};
    printf(res_mas);
    // printf("Result Multiplication the two numbers is : %d\n\n\n", result);
}


/* >>> Subtraction Of Two Numbers Program ( Version 5 ) <<< */

/* >>> A program that records two numbers in two variables and prints the value of their subtraction <<< */

void wel_mas_fun();
void sub_fun();
void res_mas_fun();

#include <stdio.h>

int main()
{
    wel_mas_fun();
    res_mas_fun();
    sub_fun();

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Subtraction Of Two Numbers Program ( Version 5 ) ..\n\n");
}

// Subtraction function;
void sub_fun()
{
    int num_1 = 1996;
    int num_2 = 2023;
    int result = num_1 - num_2;
    printf("%d\n\n\n", result);
}

// Result massage function;
void res_mas_fun()
{
    printf("Result Subtraction the two numbers is : ");
}
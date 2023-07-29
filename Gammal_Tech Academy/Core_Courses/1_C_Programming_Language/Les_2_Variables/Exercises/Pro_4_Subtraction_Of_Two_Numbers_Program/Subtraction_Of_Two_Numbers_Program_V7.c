

/* >>> Subtraction Of Two Numbers Program  ( Version  7 ) <<< */

/* >>> A program that records two numbers in two variables and prints the value of their subtraction <<< */

char *wel_mas_fun();
int res_mas_fun(int x);
int sub_fun(int num_1, int num_2);

#include <stdio.h>

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    printf("%s", *wel_mas);

    int sub = sub_fun(1996, 2023);

    int res_mas = res_mas_fun(sub);
    printf("%s",res_mas);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *wel_mas[] = {"\n\nYou welcome in Subtraction Of Two Numbers Program  ( Version  7 ) ..\n\n"};
    return *wel_mas;
}

// Subtraction function;
int sub_fun(int num_1, int num_2)
{
    // num_1 = 1996;
    // num_2 = 2023;

    int result = num_1 - num_2;
    return result;
    // printf("%d\n\n\n", result);
}

// Result massage function;
int res_mas_fun(int x)
{   
    printf("Result Subtraction the two numbers is : %d\n\n\n", x);
    //return x;
}
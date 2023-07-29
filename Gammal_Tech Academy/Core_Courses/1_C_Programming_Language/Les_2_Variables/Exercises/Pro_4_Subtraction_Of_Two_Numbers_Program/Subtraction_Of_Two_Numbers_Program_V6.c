

/* >>> Subtraction Of Two Numbers Program  ( Version  6 ) <<< */

/* >>> A program that records two numbers in two variables and prints the value of their subtraction <<< */

void wel_mas_fun(char wel_mas[]);
void res_mas_fun(char res_mas[], int result);
int sub_fun(int num_1, int num_2);

#include <stdio.h>

int main()
{
    wel_mas_fun("\n\nYou welcome in Subtraction Of Two Numbers Program  ( Version  6 ) ..\n\n");

    res_mas_fun("Result Subtraction the two numbers is : ", sub_fun(1996, 2023));

    return 0;

}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char wel_mas[])
{
    // wel_mas = "\n\nYou welcome in Subtraction Of Two Numbers Program  ( Version  6 ) ..\n\n";
    printf("%s", wel_mas);
}

// Subtraction function;
int sub_fun(int num_1, int num_2)
{
    // num_1 = 1996;
    // num_2 = 2023;

    int result = num_1 - num_2;
    return result;
    //printf("%d\n\n\n", result);
}

// Result massage function;
void res_mas_fun(char res_mas[], int result)
{
    printf("%s %d\n\n\n", res_mas, result);
}
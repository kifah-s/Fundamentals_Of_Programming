

/* >>> Records Double Digits Program ( Version 10 ) <<< */

/* >>> A program that records double digits in two variables and prints them <<< */

#include <stdio.h>

char *wel_mas_fun();
int num_1_fun(int num_1);
int num_2_fun(int num_2);
char *pri_var_mas_fun();

int main()
{
    printf(wel_mas_fun());

    printf(pri_var_mas_fun(), num_1_fun(1996), num_2_fun(2023));

    return 0;
}

// Functions ..

// Welcome massage function;
char *wel_mas_fun()
{
    char *wel_mas[] = {"\n\nYou welcome in Records Double Digits Program ( Version 10 ) ..\n\n"};

    return *wel_mas;
}

// Numbers function;
int num_1_fun(int num_1)
{
    /* int num_1 = 1996; */

    return num_1;
}

// Numbers function;
int num_2_fun(int num_2)
{
    /* int num_2 = 2023; */

    return num_2;
}

// Printing variables massage function;
char *pri_var_mas_fun()
{
    char *pri_var_wel_mas[] = {"Num_1 = %d\nNum_2 = %d\n\n\n"};

    return *pri_var_wel_mas;
}
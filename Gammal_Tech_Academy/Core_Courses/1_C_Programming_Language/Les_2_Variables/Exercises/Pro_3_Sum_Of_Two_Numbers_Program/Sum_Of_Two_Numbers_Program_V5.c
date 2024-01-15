

/* >>> Sum Of Two Numbers Program ( Version 5 ) <<< */

/* >>> A program that records two numbers in two variables and prints the value of their combined product <<< */

#include <stdio.h>

void wel_mas_fun();
void sum_num_fun();

int main()
{
    wel_mas_fun();
    sum_num_fun();

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Sum Of Two Numbers Program ( Version 5 ) ..\n\n");
}

// Sum numbers function;
void sum_num_fun()
{
    int num_1 = 1996;
    int num_2 = 2023;
    int result = num_1 + num_2;
    printf("Result sum the two numbers is : %d\n\n\n", result);
}
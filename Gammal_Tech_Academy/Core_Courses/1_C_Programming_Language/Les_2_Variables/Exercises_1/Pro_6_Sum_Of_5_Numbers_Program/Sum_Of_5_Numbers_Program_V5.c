

/* >>> Sum Of 5 Numbers Program ( Version 5 ) <<< */

/* >>> A program that  records 5 digits and prints their total <<< */

#include <stdio.h>

void wel_mas_fun();
void sum_five_num_fun();

int main()
{
    wel_mas_fun();
    sum_five_num_fun();

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Sum Of 5 Numbers Program ( Version 5 ) ..\n\n");
}

// Sum five numbers function;
void sum_five_num_fun()
{
    int num_1 = 1;
    int num_2 = 2;
    int num_3 = 3;
    int num_4 = 4;
    int num_5 = 5;
    int result = num_1 + num_2 + num_3 + num_4 + num_5;

    printf("Result Sum the five numbers is : %d\n\n\n", result);
}
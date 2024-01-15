

/* >>> Sum 3 Numbers Program In Separate Lines ( Version 8 ) <<< */

/* >>> A program that records 3 digits and prints the sum of each two digits in a separate line <<< */

#include <stdio.h>

void wel_mas_fun();
void sum_num_fun();

int main()
{
    wel_mas_fun();
    sum_num_fun();

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Sum 3 Numbers Program In Separate Lines ( Version 8 ) ..\n\n");
}

// Sum numbers fuction;
void sum_num_fun()
{
    int num_1 = 1;
    int num_2 = 2;
    int num_3 = 3;

    int result_1 = num_1 + num_2;
    int result_2 = num_2 + num_3;
    int result_3 = num_1 + num_3;

    printf("Result_1 : num_1 + num_2 = %d\n", result_1);
    printf("Result_2 : num_2 + num_3 = %d\n", result_2);
    printf("Result_3 : num_1 + num_3 = %d\n\n\n", result_3);
}
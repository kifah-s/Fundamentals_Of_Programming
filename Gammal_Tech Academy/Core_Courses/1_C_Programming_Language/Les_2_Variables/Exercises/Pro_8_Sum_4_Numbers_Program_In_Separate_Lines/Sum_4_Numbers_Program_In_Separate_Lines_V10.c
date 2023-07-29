

/* >>> Sum 4 Numbers Program In Separate Lines ( Version 10 ) <<< */

/* >>> A program that records 4 digits and prints the sum of the first two digits in a line and the sum of the second two digits in a separate line <<< */

#include <stdio.h>

void wel_mas_fun();
void sum_num_fun(int num_1, int num_2, int num_3, int num_4);

int main()
{
    wel_mas_fun();

    int num_1 = 1,
        num_2 = 2,
        num_3 = 3,
        num_4 = 4;
    sum_num_fun(num_1, num_2, num_3, num_4);

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Sum 4 Numbers Program In Separate Lines ( Version 10 ) ..\n\n");
}

// Sum numbers function;
void sum_num_fun(int num_1, int num_2, int num_3, int num_4)
{
    /* int num_1 = 1,
        num_2 = 2,
        num_3 = 3,
        num_4 = 4; */

    int result_1 = num_1 + num_2,
        result_2 = num_3 + num_4;

    printf("Num_1 + Num_2 = %d\nNum_3 + Num_4 = %d\n\n\n", result_1, result_2);
}
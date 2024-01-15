

/* >>> program Sum numbers and multiply them ( Version 6 ) <<< */

/* >>> A program that records 3 digits and prints the total of the first two digits multiplied by the third digit <<< */

#include <stdio.h>

void wel_mas_fun();
void res_sum_and_mul_num_fun();

int main()
{
    wel_mas_fun();
    res_sum_and_mul_num_fun();

    return 0;
}

// Functions..
// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in program Sum numbers and multiply them ( Version 6 ) ..\n\n");
}

// result sum and multiply numbers function;
void res_sum_and_mul_num_fun()
{
    int num_1 = 1;
    int num_2 = 2;
    int num_3 = 3;

    int result_1 = num_1 + num_2;
    int result_2 = result_1 * num_3;

    printf("result is : %d\n\n\n", result_2);
}
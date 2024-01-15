

/* >>> program Sum numbers and multiply them ( Version 9 ) <<< */

/* >>> A program that records 3 digits and prints the total of the first two digits multiplied by the third digit <<< */

#include <stdio.h>

void wel_mas_fun();
int res_sum_num1_and_num2_fun(int num_1, int num_2);
int res_tot_mul_num3_fun(int num_3);

int main()
{
    wel_mas_fun();

    /* int num_1 = 1,
           num_2 = 2,
           num_3 = 3; */

    res_sum_num1_and_num2_fun(1, 2);
    res_tot_mul_num3_fun(3);

    return 0;
}

// Functions..
// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in program Sum numbers and multiply them ( Version 9 ) ..\n\n");
}

/* // result sum and multiply numbers function;
void res_sum_and_mul_num_fun(int num_1, int num_2, int num_3)
{
    int num_1 = 1;
    int num_2 = 2;
    int num_3 = 3;

    int result_1 = num_1 + num_2;
    int result_2 = result_1 * num_3;

    printf("result is : %d\n\n\n", result_2);
} */

// result sum number one and number two function;
int res_sum_num1_and_num2_fun(int num_1, int num_2)
{
    int result_1 = num_1 + num_2;
    return result_1;
}

// result total sum number one and number two multiply number three function;
int res_tot_mul_num3_fun(int num_3)
{
    int result_1;
    int result_2 = result_1 * num_3;
    printf("result is : %d\n\n\n", result_2);
}

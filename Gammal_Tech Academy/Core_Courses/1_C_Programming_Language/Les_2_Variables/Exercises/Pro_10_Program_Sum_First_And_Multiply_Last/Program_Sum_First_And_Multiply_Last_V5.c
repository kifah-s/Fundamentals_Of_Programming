

/* >>> program Sum first numbers and Multiply last numbers ( Version 5 ) <<< */

/* >>> A program that records 4 digits and prints the sum of the first two digits in a line and multiply the other two digits in another line <<< */

#include <stdio.h>

void wel_mas_fun();
void res_sum_num1_and_num2_fun(int num1, int num2);
void res_mul_num3_and_num4_fun(int num3, int num4);

int main()
{
    wel_mas_fun();

    /* int n1 = 1,
        n2 = 2,
        n3 = 3,
        n4 = 4; */

    res_sum_num1_and_num2_fun(1, 2);
    res_mul_num3_and_num4_fun(3, 4);

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in program Sum first numbers and Multiply last numbers ( Version 5 ) ..\n\n");
}

/* // Result function;
void res_fun(int num1, int num2, int num3, int num4)
{

    int res1 = num1 + num2,
        res2 = num3 * num4;

    printf("num_1 + num_2 = %d\nnum_3 * num_4 = %d\n\n\n", res1, res2);
} */

// Result sum number 1 and number 2 function;
void res_sum_num1_and_num2_fun(int num1, int num2)
{

    int res1 = num1 + num2;

    printf("num_1 + num_2 = %d\n", res1);
}

// Result multiply number 3 and number 4 function;
void res_mul_num3_and_num4_fun(int num3, int num4)
{

    int res2 = num3 + num4;

    printf("num_1 * num_2 = %d\n\n\n", res2);
}
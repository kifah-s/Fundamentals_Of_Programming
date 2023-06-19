

/* >>> Sum First Two Numbers Program Multiplied Third Number ( Version 6 ) <<< */

/* >>> A program that asks the user to enter 3 digits and print the sum of the first two digits multiplied by the third number <<< */

#include <stdio.h>

void wel_mas_function();

int get_fri_num_fun();
int get_sec_num_fun();
int get_thi_num_fun();

int sum_fri_sec_fun(int num1, int num2);
int mult_fun(int sum, int num3);

int main()
{
    wel_mas_function();

    mult_fun(get_thi_num_fun(), sum_fri_sec_fun(get_sec_num_fun(), get_fri_num_fun()));

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Sum First Two Numbers Program Multiplied Third Number ( Version 6 ) ..\n\n");
}

/* // Collect Numbers function;
int coll_num_fun()
{
    int n_1,
        n_2,
        n_3,
        result_1,
        result_2;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    printf("Enter the third number : ");
    scanf("%d", &n_3);

    result_1 = n_1 + n_2;
    result_2 = result_1 * n_3;

    printf("\nResult sum first number and second number multiplied third number is : %d\n\n\n", result_2);
} */

// Get first number function;
int get_fri_num_fun()
{
    int n_1;
    printf("Enter a first number : ");
    scanf("%d", &n_1);
    return n_1;
}

// Get second number function;
int get_sec_num_fun()
{
    int n_2;
    printf("Enter a second number : ");
    scanf("%d", &n_2);
    return n_2;
}

// Get third number function;
int get_thi_num_fun()
{
    int n_3;
    printf("Enter a third number : ");
    scanf("%d", &n_3);
    return n_3;
}

// Result sum first number and second number function;
int sum_fri_sec_fun(int num1, int num2)
{
    int res_sum = num1 + num2;
    return res_sum;
}

// Result sum first number and second number multiplied third number function;
int mult_fun(int sum, int num3)
{
    int mult = sum * num3;
    printf("\nResult sum first number and second number multiplied third number is : %d\n\n\n", mult);
}
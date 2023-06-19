

/* >>> Program Collect 3 Numbers In Different Lines ( Version 5 ) <<< */

/* >>> A program that requires the user to enter 3 digits and print the sum of each two digits in a separate line <<< */

#include <stdio.h>

void wel_mas_function();

int get_first_num_fun();
int get_second_num_fun();
int get_third_num_fun();

int sum_num1_num2_fun(int n_1, int n_2);
int sum_num2_num3_fun(int n_2, int n_3);
int sum_num1_num3_fun(int n_1, int n_3);

int main()
{
    wel_mas_function();

    int first_num = get_first_num_fun();
    int second_num = get_second_num_fun();
    int third_num = get_third_num_fun();

    sum_num1_num2_fun(first_num, second_num);
    sum_num2_num3_fun(second_num, third_num);
    sum_num1_num3_fun(first_num, third_num);

    // printf("\nThe result of adding the first number and the second number is : %d\n", first_second);
    // printf("The result of adding the second number and the third number is : %d\n", second_third);
    // printf("The result of adding the first number and the third number is : %d\n\n\n", first_third);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Program Collect 3 Numbers In Different Lines ( Version 5 ) ..\n\n");
}

// get first number function;
int get_first_num_fun()
{
    int n_1;
    printf("Enter a first number : ");
    scanf("%d", &n_1);

    return n_1;
}
// get second number function;
int get_second_num_fun()
{
    int n_2;
    printf("Enter a second number : ");
    scanf("%d", &n_2);

    return n_2;
}
// get third number function;
int get_third_num_fun()
{
    int n_3;
    printf("Enter a third number : ");
    scanf("%d", &n_3);

    return n_3;
}

// Result sum first number and second number;
int sum_num1_num2_fun(int n_1, int n_2)
{
    int result = n_1 + n_2;
    printf("\nThe result of adding the first number and the second number is : %d\n", result);
}

// Result sum second number and third number;
int sum_num2_num3_fun(int n_2, int n_3)
{
    int result = n_2 + n_3;
    printf("The result of adding the second number and the third number is : %d\n", result);
}

// Result sum first number and third number;
int sum_num1_num3_fun(int n_1, int n_3)
{
    int result = n_1 + n_3;
    printf("The result of adding the first number and the third number is : %d\n\n\n", result);
}
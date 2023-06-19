

/* >>> Program Collect 3 Numbers In Different Lines ( Version 4 ) <<< */

/* >>> A program that requires the user to enter 3 digits and print the sum of each two digits in a separate line <<< */

#include <stdio.h>

void wel_mas_function();

int get_first_num_fun();
int get_second_num_fun();
int get_third_num_fun();

int sum_num_fun(int fir_num, int sec_num);

int main()
{
    wel_mas_function();

    int first_num = get_first_num_fun();
    int second_num = get_second_num_fun();
    int third_num = get_third_num_fun();

    int first_second = sum_num_fun(first_num, second_num);
    int second_third = sum_num_fun(second_num, third_num);
    int first_third = sum_num_fun(first_num, third_num);

    printf("\nThe result of adding the first number and the second number is : %d\n", first_second);
    printf("The result of adding the second number and the third number is : %d\n", second_third);
    printf("The result of adding the first number and the third number is : %d\n\n\n", first_third);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Program Collect 3 Numbers In Different Lines ( Version 4 ) ..\n\n");
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
int sum_num_fun(int fir_num, int sec_num)
{
    int result = fir_num + sec_num;
    return result;
}


/* >>> Program Collect 4 Numbers In Different Lines ( Version 7 ) <<< */

/* >>> A program that requires the user to enter 4 digits and print the sum of the first two digits in a line and the sum of the second two digits in a separate line <<< */

#include <stdio.h>

void wel_mas_function();

int get_first_num_fun();
int get_second_num_fun();
int get_third_num_fun();
int get_forth_num_fun();
int sum_num_fun(int num_1, int num_2);

int main()
{
    wel_mas_function();

    /* int num_1 = get_first_num_fun();
        int num_2 = get_second_num_fun();
        int num_3 = get_third_num_fun();
        int num_4 = get_forth_num_fun(); */

    /* int sum_num1_num2 = sum_num_fun(get_second_num_fun(), get_first_num_fun());
        int sum_num3_num4 = sum_num_fun(get_forth_num_fun(), get_third_num_fun()); */
    printf("The result of adding the first number and the second number is : %d\n", sum_num_fun(get_second_num_fun(), get_first_num_fun()));
    printf("The result of adding the third number and the fourth number is : %d\n\n\n", sum_num_fun(get_forth_num_fun(), get_third_num_fun()));

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Program Collect 4 Numbers In Different Lines ( Version 7 ) ..\n\n");
}

/* // Collect Numbers function;
int coll_num_fun()
{
    int n_1,
        n_2,
        n_3,
        n_4,
        result_1,
        result_2;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    printf("Enter the third number : ");
    scanf("%d", &n_3);

    printf("Enter your fourth number : ");
    scanf("%d", &n_4);

    result_1 = n_1 + n_2;
    result_2 = n_3 + n_4;

    printf("\nThe result of adding the first number and the second number is : %d\n", result_1);
    printf("The result of adding the third number and the fourth number is : %d\n\n\n", result_2);
} */

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
    printf("\nEnter a third number : ");
    scanf("%d", &n_3);

    return n_3;
}

// get forth number function;
int get_forth_num_fun()
{
    int n_4;
    printf("Enter a forth number : ");
    scanf("%d", &n_4);

    return n_4;
}

// Sum numbers function;
int sum_num_fun(int num_1, int num_2)
{
    int result = num_1 + num_2;
}
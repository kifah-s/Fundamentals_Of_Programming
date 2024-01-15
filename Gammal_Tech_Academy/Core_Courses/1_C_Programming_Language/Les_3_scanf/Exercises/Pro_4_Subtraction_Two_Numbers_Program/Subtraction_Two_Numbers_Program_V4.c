

/* >>> Subtraction Two Numbers Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter two numbers and print the value of their subtraction <<< */

#include <stdio.h>

void wel_mas_function();
int sub_num_fun();

int main()
{
    wel_mas_function();

    int result = sub_num_fun();
    printf("\nThe result is : %d\n\n\n", result);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Subtraction Two Numbers Program ( Version 4 ) ..\n\n");
}

// Subtraction Numbers function;
int sub_num_fun()
{
    int n_1,
        n_2,
        result;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    result = n_1 - n_2;

    // printf("\nThe result is : %d\n\n\n", result);

    return result;
}
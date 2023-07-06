

/* >>> Sum Five Numbers Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter 5 digits and print their total <<< */

#include <stdio.h>

void wel_mas_function();
int sum_num_fun();

int main()
{
    wel_mas_function();
    sum_num_fun();
    
    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\nYou welcome in Sum Five Numbers Program ( Version 2 ) ..\n\n");
}

// Sum Numbers function;
int sum_num_fun()
{
    int n_1,
        n_2,
        n_3,
        n_4,
        n_5,
        result;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    printf("Enter the third number : ");
    scanf("%d", &n_3);

    printf("Enter your fourth number : ");
    scanf("%d", &n_4);

    printf("Enter your fifth number : ");
    scanf("%d", &n_5);

    result = n_1 + n_2 + n_3 + n_4 + n_5;

    printf("\nSum the five numbers is : %d\n\n\n", result);
}


/* >>> Sum First Two Numbers Program Multiplied Third Number ( Version 4 ) <<< */

/* >>> A program that asks the user to enter 3 digits and print the sum of the first two digits multiplied by the third number <<< */

#include <stdio.h>

void wel_mas_function();
int coll_num_fun();

int main()
{
    wel_mas_function();
    coll_num_fun();

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_function()
{
    printf("\n\nYou welcome in Sum First Two Numbers Program Multiplied Third Number ( Version 4 ) ..\n\n");
}

// Collect Numbers function;
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
}
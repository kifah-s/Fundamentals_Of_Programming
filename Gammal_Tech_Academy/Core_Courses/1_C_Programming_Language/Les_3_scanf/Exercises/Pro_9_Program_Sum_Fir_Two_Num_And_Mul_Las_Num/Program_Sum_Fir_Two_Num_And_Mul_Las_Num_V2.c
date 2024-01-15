

/* >>> Program Sum First Two Numbers And Multiply Last Numbers ( Version 2 ) <<< */

/* >>> A program that requires the user to enter 4 digits and print the sum of the first two digits in a line and multiply the other two digits in another line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Program Sum First Two Numbers And Multiply Last Numbers ( Version 2 ) ..\n\n");

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
    result_2 = n_3 * n_4;

    printf("\nNum_1 + Num_2 : %d\nNum_3 * Num_4 : %d\n\n\n", result_1, result_2);

    return 0;
}
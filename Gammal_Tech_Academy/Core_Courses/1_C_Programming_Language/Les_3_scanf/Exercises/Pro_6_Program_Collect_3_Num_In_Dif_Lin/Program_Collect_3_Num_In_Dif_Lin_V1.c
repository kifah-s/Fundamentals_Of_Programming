

/* >>> Program Collect 3 Numbers In Different Lines ( Version 1 ) <<< */

/* >>> A program that requires the user to enter 3 digits and print the sum of each two digits in a separate line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Program Collect 3 Numbers In Different Lines ( Version 1 ) ..\n\n");

    int n_1,
        n_2,
        n_3,
        result_1,
        result_2,
        result_3;

    printf("Enter a first number : ");
    scanf("%d", &n_1);

    printf("Enter a second number : ");
    scanf("%d", &n_2);

    printf("Enter the third number : ");
    scanf("%d", &n_3);

    result_1 = n_1 + n_2;
    result_2 = n_2 + n_3;
    result_3 = n_1 + n_3;

    printf("\nThe result of adding the first number and the second number is : %d\n", result_1);
    printf("The result of adding the second number and the third number is : %d\n", result_2);
    printf("The result of adding the first number and the third number is : %d\n\n\n", result_3);

    return 0;
}
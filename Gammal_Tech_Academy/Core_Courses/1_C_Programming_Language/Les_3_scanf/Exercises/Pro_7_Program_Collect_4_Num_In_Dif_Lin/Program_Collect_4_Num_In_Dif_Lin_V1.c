

/* >>> Program Collect 4 Numbers In Different Lines ( Version 1 ) <<< */

/* >>> A program that requires the user to enter 4 digits and print the sum of the first two digits in a line and the sum of the second two digits in a separate line <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Program Collect 4 Numbers In Different Lines ( Version 1 ) ..\n\n");

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

    return 0;
}
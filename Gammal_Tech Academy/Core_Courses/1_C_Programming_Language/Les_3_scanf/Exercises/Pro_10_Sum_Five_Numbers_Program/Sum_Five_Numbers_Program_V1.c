

/* >>> Sum Five Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter 5 digits and print their total <<< */

#include <stdio.h>

int main()
{
    printf("\nYou welcome in Sum Five Numbers Program ( Version 1 ) ..\n\n");

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

    return 0;
}
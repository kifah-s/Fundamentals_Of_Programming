

/* >>> Example 1 - ( Version - 2 ) <<< */

/* >>> A program that prints the largest of two numbers entered by the user. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example 1 - ( Version - 2 ) ..\n\n");

    int num_1, num_2;

    printf("Please enter the first number : ");
    scanf("%d", &num_1);
    // printf("%d\n", num_1);

    printf("Please enter the second number : ");
    scanf("%d", &num_2);
    // printf("%d\n", num_2);

    if (num_1 > num_2)
    {
        printf("\nThe largest number is : %d\n\n\n", num_1);
    }
    else if (num_2 > num_1)
    {
        printf("\nThe largest number is : %d\n\n\n", num_2);
    }
    else
    {
        printf("\nThe numbers equal : %d = %d\n\n\n", num_1, num_2);
    }
}


/* >>> Example 1 - ( Version - 1 ) <<< */

/* >>> A program that prints the largest of two numbers entered by the user. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example 1- ( Version - 1 ) ..\n\n");

    int largest_Num, smallest_Num;

    printf("Please enter the largest number : ");
    scanf("%d", &largest_Num);
    // printf("%d\n", largest_Num);

    printf("Please enter the smallest number : ");
    scanf("%d", &smallest_Num);
    // printf("%d\n", smallest_Num);

    printf("\nThe largest number is : %d\n\n\n", largest_Num);
}


/* >>> Reverse Of Numbers Program <<< */

/* >>> A program that asks the user to enter 10 consecutive numbers and prints the numbers as opposed to the order in which the user entered the numbers. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Reverse Of Numbers Program .. \n\n");

    int i, num[10];

    for (i = 0; i < 10; i++)
    {
        printf("Please Enter a number : ");
        scanf("%d", &num[i]);
    }
    printf("\n");

    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", num[i]);
    }

    printf("\n\n\n");
}


/* >>> From Largest To Smaller Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the largest to the smallest. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Largest To Smaller Program ( Version 1 ) ..\n\n");

    int num_B, num_S, i;

    printf("Please enter first number \" Largest Number \" : ");
    scanf("%d", &num_B);

    printf("Please enter Second number \" Smaller Number \" : ");
    scanf("%d", &num_S);

    i = num_B;
    while (i >= num_S)
    {
        printf("\n%d", i);
        i--;
    }
    printf("\n\n\n");

    return 0;
}
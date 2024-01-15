

/* >>> From Smallest To Largest Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Smallest To Largest Program ( Version 2 ) ..\n\n");

    int i, num_1, num_2;

    printf("\nEnter the first number ( Smallest Number ) : ");
    scanf("%d", &num_1);

    printf("\nEnter the second number ( Largest Number ) : ");
    scanf("%d", &num_2);

    for (i = num_1; i <= num_2; i++)
    {
        printf("\n%d", i);
    }

    printf("\n\n\n");

    return 0;
}
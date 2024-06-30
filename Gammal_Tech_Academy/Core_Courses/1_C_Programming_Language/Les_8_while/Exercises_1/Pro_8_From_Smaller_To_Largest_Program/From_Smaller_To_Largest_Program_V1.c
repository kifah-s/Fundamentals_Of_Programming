

/* >>> From Smaller To Largest Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Smaller To Largest Program ( Version 1 ) ..\n\n");

    int num_S, num_B, i;

    printf("Please enter first number \" Smaller Number \" : ");
    scanf("%d", &num_S);

    printf("Please enter Second number \" Largest Number \" : ");
    scanf("%d", &num_B);

    i = num_S;
    while (i <= num_B)
    {
        printf("\n%d", i);
        i++;
    }
    printf("\n\n\n");

    return 0;
}
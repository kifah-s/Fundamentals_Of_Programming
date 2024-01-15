

/* >>> From Num To Num Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two numbers, second one smaller than the first one; then prints the numbers from to first one to the second one. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Num To Num Program ( Version 2 ) ..\n\n");

    int i, num_1, num_2;

    printf("\nEnter the first number : ");
    scanf("%d", &num_1);

    printf("\nEnter the second number  : ");
    scanf("%d", &num_2);

    if (num_1 > num_2)
    {
        for (i = num_1; i >= num_2; i--)
        {
            printf("\n%d", i);
        }
    }
    else if (num_1 < num_2)
    {
        for (i = num_2; i >= num_1; i--)
        {
            printf("\n%d", i);
        }
    }
    else
    {
        printf("\nfirst number %d == second number %d\n", num_1, num_2);
    }
    printf("\n\n\n");

    return 0;
}
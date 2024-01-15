

/* >>> From Largest To Smaller Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the largest to the smallest. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Largest To Smaller Program ( Version 3 ) ..\n\n");

    int num_1, num_2, i;

    printf("Please enter first number : ");
    scanf("%d", &num_1);

    printf("Please enter Second number : ");
    scanf("%d", &num_2);

    if (num_1 < num_2)
    {
        i = num_2;
        while (i >= num_1)
        {
            printf("\n%d", i);
            i--;
        }
    }
    else if (num_1 > num_2)
    {
        i = num_1;
        while (i >= num_2)
        {
            printf("\n%d", i);
            i--;
        }
    }
    else
    {
        printf("\nThe numbers equal : %d = %d", num_1, num_2);
    }

    printf("\n\n\n");

    return 0;
}
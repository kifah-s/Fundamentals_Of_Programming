

/* >>> From Smaller To Largest Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Smaller To Largest Program ( Version 2 ) ..\n\n");

    int num_1, num_2, i;

    printf("Please enter first number : ");
    scanf("%d", &num_1);

    printf("Please enter Second number : ");
    scanf("%d", &num_2);

    if (num_1 < num_2)
    {
        i = num_1;
        while (i <= num_2)
        {
            printf("\n%d", i);
            i++;
        }
    }
    else
    {
        i = num_2;
        while (i <= num_1)
        {
            printf("\n%d", i);
            i++;
        }
    }

    printf("\n\n\n");

    return 0;
}
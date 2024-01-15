

/* >>> From Smallest To Largest Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Smallest To Largest Program ( Version 1 ) ..\n\n");

    int num_1, num_2;

    printf("Please enter number : ");
    scanf("%d", &num_1);

    printf("Please enter number : ");
    scanf("%d", &num_2);

    if (num_1 > num_2)
    {
        do
        {
            printf("\n%d", num_2);
            num_2++;
        } while (num_2 <= num_1);
    }
    else if (num_1 < num_2)
    {
        do
        {
            printf("\n%d", num_1);
            num_1++;

        } while (num_1 <= num_2);
    }
    else
    {
        printf("\n%d = %d", num_1, num_2);
    }

    printf("\n\n\n");

    return 0;
}
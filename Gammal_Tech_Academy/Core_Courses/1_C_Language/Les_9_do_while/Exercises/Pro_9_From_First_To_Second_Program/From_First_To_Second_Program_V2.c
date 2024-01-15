

/* >>> From First To Second Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two numbers smaller than the second and is printed from the first number to the second number (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From First To Second Program ( Version 2 ) ..\n\n");

    int num_1, num_2;

    printf("Please enter first number : ");
    scanf("%d", &num_1);

    printf("Please enter second number : ");
    scanf("%d", &num_2);

    if (num_1 > num_2)
    {
        do
        {
            printf("\n%d", num_2);
            num_2++;

        } while (num_2 <= num_1);
    }
    else if (num_2 > num_1)
    {
        do
        {
            printf("\n%d", num_1);
            num_1++;

        } while (num_1 <= num_2);
    }
    else
    {
        printf("\nThe numbers equal : %d = %d", num_1, num_2);
    }

    printf("\n\n\n");

    return 0;
}


/* >>> Big Number Select Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is greater than the second, printed "first is the greatest", and if vice versa printed "second is the greatest" <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Big Number Select Program ( Version 1 ) ..\n\n");

    int first_N, second_N;

    printf("Please, enter the first number : ");
    scanf("%d", &first_N);

    printf("Please, enter the second number : ");
    scanf("%d", &second_N);

    if (first_N > second_N)
    {
        printf("\nFirst number is the greatest\n\n\n");
    }
    else
    {
        printf("\nSecond number is the greatest\n\n\n");
    }

    return 0;
}
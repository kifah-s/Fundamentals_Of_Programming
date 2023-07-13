

/* >>> 10 Digit Printing Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter 10 consecutive numbers and when implemented prints each number in a line and prints their total. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in 10 Digit Printing Program ( Version 1 ) .. \n\n");

    int i, num[10], sum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Please Enter a number : ");
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");

    printf("result = %d\n\n\n", sum);

    return 0;
}
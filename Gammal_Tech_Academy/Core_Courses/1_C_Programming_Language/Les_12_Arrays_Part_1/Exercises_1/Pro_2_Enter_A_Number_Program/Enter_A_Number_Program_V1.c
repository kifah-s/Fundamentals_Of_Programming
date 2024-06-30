

/* >>> Enter A Number Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter a number that reflects the number he will enter thereafter and records the numbers, prints them and prints their totality. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Enter A Number Program ( Version 1 ) .. \n\n");

    int i, x, num[x], sum = 0;

    printf("Please enter the number of numbers you want to enter : ");
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        printf("Please Enter a number : ");
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("\n");

    for (i = 0; i < x; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");

    printf("result = %d\n\n\n", sum);

    return 0;
}
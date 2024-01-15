

/* >>> From Num To Num Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers, second one smaller than the first one; then prints the numbers from to first one to the second one. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From Num To Num Program ( Version 1 ) ..\n\n");

    int i, num_1, num_2;

    printf("\nEnter the first number ( larger number ) : ");
    scanf("%d", &num_1);

    printf("\nEnter the second number (smaller number ) : ");
    scanf("%d", &num_2);

    for (i = num_1; i >= num_2; i--)
    {
        printf("\n%d", i);
    }

    printf("\n\n\n");

    return 0;
}
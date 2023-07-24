

/* >>> Array Size Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter two numbers expressing the size of the 2D array and records the numbers to be written and printed in the other and printed in all. <<< */

#include <stdio.h>

int arr_size();

int main()
{
    printf("\n\nYou welcome in Array Size Program ( Version 3 ) ..\n\n");

    arr_size();

    return 0;
}

// Functions ..
// arr size function;
int arr_size()
{
    // Definition numbers, counters and sum;
    int a, b, i, j, sum = 0;

    printf("Enter 2 numbers for (2D array): ");
    scanf("%d %d", &a, &b);

    // Definition array;
    int x[a][b];

    // Receive values from the user;
    printf("Enter %d numbers: \n", a * b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &x[i][j]);
            sum = sum + x[i][j];
        }
    }

    printf("\n");

    // Print and sum numbers;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal => %d", sum);

    printf("\n\n\n");
}
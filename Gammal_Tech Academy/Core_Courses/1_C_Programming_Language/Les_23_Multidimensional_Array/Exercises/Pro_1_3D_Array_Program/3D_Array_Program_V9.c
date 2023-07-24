

/* >>> 3D Array Program ( Version 9 ) <<< */

/* >>> A program that asks a person to enter 3 digits expressing the size of the 3D array and records the numbers to be written and printed at the other and printed together. <<< */

#include <stdio.h>

void welcomeMassageFun();
int array_3d();

int main()
{
    welcomeMassageFun();
    array_3d();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 3D Array Program ( Version 9 ) ..\n\n");
}

// array 3d function;
int array_3d()
{
    // Declaration the variables and counters;
    int a, b, c, i, j, k, sum = 0;

    // Receive values from the user;
    printf("Enter 3 numbers for 3D array: ");
    scanf("%d%d%d", &a, &b, &c);

    // Declaration the array;
    int x[a][b][c];

    // Receive values from the user;
    printf("Enter %d numbers: \n", a * b * c);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            for (k = 0; k < c; k++)
            {
                scanf("%d", &x[i][j][k]);
                sum += x[i][j][k];
            }
        }
    }
    printf("\n");

    // Printing the array;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            for (k = 0; k < c; k++)
            {
                printf("%d\t", x[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\nTotal => %d\n", sum);

    printf("\n\n");
}
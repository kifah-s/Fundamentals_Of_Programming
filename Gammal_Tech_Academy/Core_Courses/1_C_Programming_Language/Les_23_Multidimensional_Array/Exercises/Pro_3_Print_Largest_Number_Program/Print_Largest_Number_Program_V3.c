

/* >>> Print Largest Number Program ( Version 3 ) <<< */

/* >>> A program with 3D array contains 8 digits, and prints the largest number in them. <<< */

#include <stdio.h>

int print_largest_number();

int main()
{
    printf("\n\nYou welcome in Print Largest Number Program ( Version 3 ) ..\n\n");

    print_largest_number();

    return 0;
}

// Functions ..
// print largest number function;
int print_largest_number()
{
    // Declaration dimension;
    int dim_1, dim_2, dim_3;

    // Receiving values from user;
    printf("Please enter array dimension : \n");

    printf("Dimension 1 : ");
    scanf("%d", &dim_1);

    printf("Dimension 2 : ");
    scanf("%d", &dim_2);

    printf("Dimension 3 : ");
    scanf("%d", &dim_3);

    // Declaration array;
    int arr[dim_1][dim_2][dim_3];

    // Declaration counters and variable;
    int i, j, k, largest = 0;

    // Receiving values from user;
    printf("\nPlease enter %d number : \n", dim_1 * dim_2 * dim_3);

    for (i = 0; i < dim_1; i++)
    {
        for (j = 0; j < dim_2; j++)
        {
            for (k = 0; k < dim_3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("\n");

    // Print array elements;
    printf("Array is : \n\n");
    for (i = 0; i < dim_1; i++)
    {
        for (j = 0; j < dim_2; j++)
        {
            for (k = 0; k < dim_3; k++)
            {
                printf("%d  ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Check largest number;
    for (i = 0; i < dim_1; i++)
    {
        for (j = 0; j < dim_2; j++)
        {
            for (k = 0; k < dim_3; k++)
            {
                if (arr[i][j][k] > largest)
                {
                    largest = arr[i][j][k];
                }
            }
        }
    }
    // Print largest number;
    printf("Largest number is : %d", largest);

    printf("\n\n\n");
}
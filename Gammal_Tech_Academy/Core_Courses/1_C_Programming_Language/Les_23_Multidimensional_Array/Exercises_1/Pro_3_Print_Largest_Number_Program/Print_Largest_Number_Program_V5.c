

/* >>> Print Largest Number Program ( Version 5 ) <<< */

/* >>> A program with 3D array contains 8 digits, and prints the largest number in them. <<< */

#include <stdio.h>

void welcomeMassageFun();
int get_dimension_1_fun();
int get_dimension_2_fun();
int get_dimension_3_fun();
int print_largest_number(int dim_1, int dim_2, int dim_3);

int main()
{
    welcomeMassageFun();

    int dim_1 = get_dimension_1_fun();
    int dim_2 = get_dimension_2_fun();
    int dim_3 = get_dimension_3_fun();
    print_largest_number(dim_1, dim_2, dim_3);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Largest Number Program ( Version 5 ) ..\n\n");
}

// get dimension 1 function;
int get_dimension_1_fun()
{
    printf("Please enter array dimension : \n");

    // Receiving values from user;
    int dim_1;
    printf("Dimension 1 : ");
    scanf("%d", &dim_1);

    return dim_1;
}

// get dimension 2 function;
int get_dimension_2_fun()
{
    // Receiving values from user;
    int dim_2;
    printf("Dimension 2 : ");
    scanf("%d", &dim_2);

    return dim_2;
}

// get dimension 3 function;
int get_dimension_3_fun()
{
    // Receiving values from user;
    int dim_3;
    printf("Dimension 3 : ");
    scanf("%d", &dim_3);

    return dim_3;
}

// print largest number function;
int print_largest_number(int dim_1, int dim_2, int dim_3)
{
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
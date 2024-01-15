

/* >>> Print Largest Number Program ( Version 2 ) <<< */

/* >>> A program with 3D array contains 8 digits, and prints the largest number in them. <<< */

#include <stdio.h>

void welcomeMassageFun();
int print_largest_number();

int main()
{
    welcomeMassageFun();
    print_largest_number();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Largest Number Program ( Version 2 ) ..\n\n");
}
// print largest number function;
int print_largest_number()
{
    // Declaration array;
    int arr[2][2][2] = {{{1, 2}, {3, 4}},
                        {{5, 6}, {7, 8}}};

    // Declaration counters and variable;
    int i, j, k, largest = 0;

    // Print array elements;
    printf("Array is : \n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d  ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Check largest number;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
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
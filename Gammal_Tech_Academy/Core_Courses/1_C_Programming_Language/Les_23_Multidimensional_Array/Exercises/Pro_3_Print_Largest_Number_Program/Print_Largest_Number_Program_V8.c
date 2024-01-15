

/* >>> Print Largest Number Program ( Version 8 ) <<< */

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
    printf("\n\nYou welcome in Print Largest Number Program ( Version 8 ) ..\n\n");
}

// print largest number function;
int print_largest_number()
{
    // Declaration array, counters, variable;
    int x[2][2][2] = {8, 5, 87, 2, 7, 3, 5, 1}, i, j, k, max;

    max = x[0][0][0];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                if (x[i][j][k] > max)
                {
                    max = x[i][j][k];
                }
            }
        }
    }
    printf("Max number => %d\n", max);

    printf("\n\n");
}
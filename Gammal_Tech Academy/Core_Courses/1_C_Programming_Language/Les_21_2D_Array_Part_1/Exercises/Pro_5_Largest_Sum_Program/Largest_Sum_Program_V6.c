

/* >>> Largest Sum Program ( Version 6 ) <<< */

/* >>> A program with 2D array with 15 numbers, that prints every 5 digits in a line and prints the sum of the number of this line and eventually prints the sum of the 3 lines. <<< */

#include <stdio.h>

void welcomeMassageFun();
int largest_sum();

int main()
{
    welcomeMassageFun();
    largest_sum();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Sum Program ( Version 6 ) ..\n\n");
}

// largest sum function;
int largest_sum()
{
    // Definition array, counters, sum and max;
    int x[3][5] = {{1, 2, 4, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 24, 20}}, i, j, sum = 0, max;

    // Prints the array and the sum result of each row in it;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum = sum + x[i][j];
            max = sum;
            printf("%d ", x[i][j]);
        }
        printf("Total => %d\n", sum);

        // Comparing the biggest sum result;
        if (sum > max)
        {
            max = sum;
        }
        sum = 0;
    }
    printf("\nMax Total => %d\n", max);

    printf("\n\n\n");
}


/* >>> 15 Numbers Program ( Version 2 ) <<< */

/* >>> A program with 2D array containing 15 numbers, the program prints every 5 digits in a line and prints the total number of this line. <<< */

#include <stdio.h>

void welcomeMassageFun();
int arr_15_num();

int main()
{
    welcomeMassageFun();
    arr_15_num();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 15 Numbers Program ( Version 2 ) ..\n\n");
}

// arr 15 num function;
int arr_15_num()
{
    // Definition array;
    int arr[3][5] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3}};

    // Definition counters;
    int i, j, sum = 0;

    // Prints the array and the sum result of each row in it;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d  ", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("|  Result sum this row is : %d", sum);
        sum = 0;
        printf("\n");
    }

    printf("\n\n\n");
}
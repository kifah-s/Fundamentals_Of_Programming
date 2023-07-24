

/* >>> Sum One Row In Array Program ( Version 2 ) <<< */

/* >>> A program in which array 2D sizes 4x5 has random numbers.
   Required: printing each row in the array and after it the sum of the elements within this row and printing the sum of all items at the end. <<< */

#include <stdio.h>

void welcomeMassageFun();
int sum_one_row();

int main()
{
    welcomeMassageFun();
    sum_one_row();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum One Row In Array Program ( Version 2 ) ..\n\n");
}

// sum one row function;
int sum_one_row()
{
    // Definition array;
    int arr[4][5] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4}};

    // Definition counters, sum and total;
    int i, j, sum = 0, total = 0;

    // Prints the array and the sum result of each row in it;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d  ", arr[i][j]);
            sum = sum + arr[i][j];
            total = total + arr[i][j];
        }
        printf("|  Result sum this row is : %d", sum);

        // total = total + sum; " Calculate the total in another way "

        sum = 0;
        printf("\n");
    }
    printf("\nTotal = %d", total);

    printf("\n\n\n");
}
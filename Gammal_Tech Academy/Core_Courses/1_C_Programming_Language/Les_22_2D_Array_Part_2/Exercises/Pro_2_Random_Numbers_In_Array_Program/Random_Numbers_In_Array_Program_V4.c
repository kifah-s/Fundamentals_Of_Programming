

/* >>> Random Numbers In Array Program ( Version 4 ) <<< */

/* >>> A program in which array 2D size 4x5 has random numbers.
   Required : filling array 2D is silver size 4x5 and printing the second array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int random_num();

int main()
{
    welcomeMassageFun();
    random_num();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Random Numbers In Array Program ( Version 4 ) ..\n\n");
}

// random num function;
int random_num()
{
    // Definition array 1;
    int arr_1[4][5] = {{1, 1, 1, 1, 1},
                       {2, 2, 2, 2, 2},
                       {3, 3, 3, 3, 3},
                       {4, 4, 4, 4, 4}};

    // Definition array 2 and counters;
    int arr_2[4][5], i, j;

    // Receive array 2 elements from the user;
    printf("Please enter array elements ' 20 element ' : \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr_2[i][j]);
        }
    }
    printf("\n");

    // Printing array 2;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d  ", arr_2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");
}
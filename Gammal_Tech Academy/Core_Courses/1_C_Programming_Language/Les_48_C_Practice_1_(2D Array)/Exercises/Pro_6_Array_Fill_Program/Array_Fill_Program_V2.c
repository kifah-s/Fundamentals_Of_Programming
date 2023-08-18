

/* >>> Array Fill Program ( Version 2 ) <<< */

/* >>> A program in which an array contains 10 numbers and another array 2D of size 2x5. What is required is that the second array is dictated by the first array. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int printArraysBeforFillFun(int array_1[10], int array_2[2][5]);
int fillArray2Fun(int array_1[10], int array_2[2][5]);
int printArray2AfterFillFun(int array_2[2][5]);

int main()
{
    welcomeMassageFun();

    int array_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        array_2[2][5] = {{0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0}};

    printArraysBeforFillFun(array_1, array_2);
    fillArray2Fun(array_1, array_2);
    printArray2AfterFillFun(array_2);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Array Fill Program ( Version 2 ) ..\n\n");
}

// Print arrays befor fill function;
int printArraysBeforFillFun(int array_1[10], int array_2[2][5])
{
    printf("Before Fill .. \n");
    printf("Array 1 : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", array_1[i]);
    }

    printf("\n\nArray 2 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", array_2[i][j]);
        }
    }
}

//  Fill Array 2 function;
int fillArray2Fun(int array_1[10], int array_2[2][5])
{
    int index = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_2[i][j] = array_1[index];
            index++;
        }
    }
}
// Print array 2 after fill function;
int printArray2AfterFillFun(int array_2[2][5])
{
    printf("\n\nAfter Fill .. \n");
    printf("Array 2 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", array_2[i][j]);
        }
    }
    printf("\n\n");
}

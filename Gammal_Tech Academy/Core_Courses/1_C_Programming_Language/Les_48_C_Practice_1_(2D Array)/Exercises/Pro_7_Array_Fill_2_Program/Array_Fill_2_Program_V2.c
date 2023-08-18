

/* >>> Array Fill 2 Program ( Version 2 ) <<< */

/* >>> A program in which an array contains 10 numbers and a second array containing 10 different numbers and an array 2D with a space of 2x5 in size. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int printArraysBeforFillFun(int array_1[10], int array_2[10], int array_[4][5]);
int fillArray3Fun(int array_1[10], int array_2[10], int array_[4][5]);
int printArray3AfterFillFun(int array_3[4][5]);

int main()
{
    welcomeMassageFun();

    int array_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        array_2[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        array_3[4][5] = {{0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0}};

    printArraysBeforFillFun(array_1, array_2, array_3);
    fillArray3Fun(array_1, array_2, array_3);
    printArray3AfterFillFun(array_3);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Array Fill 2 Program ( Version 2 ) ..\n\n");
}

// Print arrays befor fill function;
int printArraysBeforFillFun(int array_1[10], int array_2[10], int array_3[4][5])
{
    printf("Before Fill .. \n");
    printf("Array 1 : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", array_1[i]);
    }

    printf("\n\nArray 2 : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", array_2[i]);
    }

    printf("\n\nArray 3 : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", array_3[i][j]);
        }
    }
}

//  Fill Array 3 function;
int fillArray3Fun(int array_1[10], int array_2[10], int array_3[4][5])
{
    int index = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_3[i][j] = array_1[index];
            index++;
        }
    }
    index = 0;

    for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_3[i][j] = array_2[index];
            index++;
        }
    }
}
// Print array 3 after fill function;
int printArray3AfterFillFun(int array_3[4][5])
{
    printf("\n\nAfter Fill .. \n");
    printf("Array 3 : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", array_3[i][j]);
        }
    }
    printf("\n\n");
}



/* >>> Array Fill 2 Program ( Version 1 ) <<< */

/* >>> A program in which an array contains 10 numbers and a second array containing 10 different numbers and an array 2D with a space of 2x5 in size. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int arrayFun();

int main()
{
    welcomeMassageFun();

    arrayFun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Array Fill 2 Program ( Version 1 ) ..\n\n");
}

// Array function;
int arrayFun()
{
    int array_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        array_2[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        array_3[4][5] = {{0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0}};

    // Print arrays befor fill;
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

    // Fill Array 3;
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

    // Print array 2 after fill;
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



/* >>> Problem Solving ( Version 4 ) <<< */

/* >>> Problem statement

Ahmed was thinking about coding a new algorithm to get the unique values in an array A, which holds repetitive values N numbers. Moreover, Ahmed wants to solve it with a perfect approach in order to send it to Gammal Tech for the volunteering points.

Can you help Ahmed to get Gammal Tech volunteering points?

Input

First line contains a number N (1 ≤ N ≤ 10^3) the number of elements.

Second line contains N numbers (0 ≤ A[ i ]≤ 10^9).

Output

Print unique elements in the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getElementsNumberFun();
int *getElementsFun(int elementsNumber);
int problemSolvingFun();

int main()
{
    welcomeMassageFun();

    problemSolvingFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Problem Solving ( Version 4 ) .. \n\n");
}

// Get elements number of the array function;
int getElementsNumberFun()
{
    int elementsNumber;
    printf("Please select the number of numbers you want to enter : ");
    scanf("%d", &elementsNumber);

    return elementsNumber;
}

// Get elements of the array function;
int *getElementsFun(int elementsNumber)
{
    static int arr[10];

    for (int i = 0; i < elementsNumber; i++)
    {
        printf("\nPlease enter elements in index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    return arr;
}

// Problem Solving Function;
int problemSolvingFun()
{
    int elementsNumber = getElementsNumberFun();
    int *arr = getElementsFun(elementsNumber);

    for (int i = 0; i < elementsNumber; i++)
    {
        int matched = 0;

        for (int j = 0; j < elementsNumber; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                matched = 1;
            }
        }
        if (matched == 0)
        {
            printf("The unique numbers is : %d\n", arr[i]);
        }
    }

    printf("\n\n\n");
}
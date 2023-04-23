

/* >>> Problem Solving <<< */

/* >>> Problem statement

Ahmed was thinking about coding a new algorithm to get the unique values in an array A, which holds repetitive values N numbers. Moreover, Ahmed wants to solve it with a perfect approach in order to send it to Gammal Tech for the volunteering points.

Can you help Ahmed to get Gammal Tech volunteering points?

Input

First line contains a number N (1 ≤ N ≤ 10^3) the number of elements.

Second line contains N numbers (0 ≤ A[ i ]≤ 10^9).

Output

Print unique elements in the array. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Problem Solving .. \n\n");

    int x, i, j;
    printf("Please select the number of numbers you want to enter : ");
    scanf("%d", &x);
    int arr[x];

    for (i = 0; i < x; i++)
    {
        printf("\nPlease enter elements in index %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (i = 0; i < x; i++)
    {
        int matched = 0;
        for (j = 0; j < x; j++)
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
//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

#define MAX_EMPLOYEES 1000
#define THRESHOLD 10

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int n, i, hli;
    scanf("%d", &n);
    int hlis[MAX_EMPLOYEES];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &hlis[i]);
    }
    for (i = 0; i < n; i++)
    {
        hli = hlis[i] >> 1; // Applying Right Shift bitwise operation
        if (hli < THRESHOLD)
        {
            printf("%d %d\n", i + 1, hli);
        }
    }

    printf("\n\n");

    return 0;
}
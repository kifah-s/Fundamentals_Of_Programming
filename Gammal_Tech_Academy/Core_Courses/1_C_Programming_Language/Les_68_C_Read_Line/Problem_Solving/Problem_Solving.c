//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

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

    int T, N, A;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &A);
        printf("%d\n", N * A);
    }

    printf("\n\n");

    return 0;
}
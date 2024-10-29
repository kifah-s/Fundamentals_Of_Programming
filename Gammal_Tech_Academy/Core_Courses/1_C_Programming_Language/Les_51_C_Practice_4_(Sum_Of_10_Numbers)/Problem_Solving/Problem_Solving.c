//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void optimizeData(int data[], int n)
{
    int i, optimizedData[n];
    optimizedData[0] = data[1];
    optimizedData[n - 1] = data[n - 2];
    for (i = 1; i < n - 1; i++)
    {
        optimizedData[i] = (data[i - 1] + data[i + 1]) / 2;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", optimizedData[i]);
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n, i;
    scanf("%d", &n);
    int data[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    optimizeData(data, n);

    printf("\n\n");

    return 0;
}
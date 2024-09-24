//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

int maxBitwiseAND(int arr[], int n)
{
    int maxAND = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] & arr[j]) > maxAND)
            {
                maxAND = arr[i] & arr[j];
            }
        }
    }
    return maxAND;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        int skillSets[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &skillSets[i]);
        }
        printf("%d\n", maxBitwiseAND(skillSets, n));
    }

    printf("\n\n");

    return 0;
}
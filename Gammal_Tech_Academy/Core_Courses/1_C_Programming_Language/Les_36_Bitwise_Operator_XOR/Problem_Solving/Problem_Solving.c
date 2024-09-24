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

    int N;
    scanf("%d", &N);

    int max_xor = 0;
    int pair[2], max_pair[2];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &pair[0], &pair[1]);
        int current_xor = pair[0] ^ pair[1];
        if (i == 0 || current_xor > max_xor)
        {
            max_xor = current_xor;
            max_pair[0] = pair[0];
            max_pair[1] = pair[1];
        }
    }

    printf("%d %d\n", max_pair[0], max_pair[1]);

    printf("\n\n");

    return 0;
}
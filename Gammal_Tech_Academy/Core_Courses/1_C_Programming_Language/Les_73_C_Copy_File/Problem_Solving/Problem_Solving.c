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

    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int numbers[N], sum = 0, max = 0, min = 10001;
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &numbers[i]);
            sum += numbers[i];
            if (numbers[i] > max)
                max = numbers[i];
            if (numbers[i] < min)
                min = numbers[i];
        }
        sum = sum - max - min;
        float avg = (float)sum / (N - 2);
        printf("%.2f\n", avg);
    }

    printf("\n\n");

    return 0;
}
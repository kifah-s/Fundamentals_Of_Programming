//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <math.h>
#include <float.h>

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

    for (int i = 0; i < N; i++)
    {
        double num;
        scanf("%lf", &num);
        if (num == (int)num)
        {
            if (num >= INT_MIN && num <= INT_MAX)
                printf("%.0lf is best stored as a int\n", num);
            else
                printf("%.0lf is best stored as a long long\n", num);
        }
        else
        {
            if (num >= FLT_MIN && num <= FLT_MAX)
                printf("%lf is best stored as a float\n", num);
            else if (num >= -32768 && num <= 32767)
                printf("%lf is best stored as a short\n", num);
            else
                printf("%lf is best stored as a double\n", num);
        }
    }

    printf("\n\n");

    return 0;
}
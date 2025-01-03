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

    int T, HQ_Time, TimeZoneDiff;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &HQ_Time, &TimeZoneDiff);
        int localTime = (HQ_Time + TimeZoneDiff + 24) % 24; // Adjust for time zone difference
        if (localTime >= 6 && localTime <= 18)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    printf("\n\n");

    return 0;
}
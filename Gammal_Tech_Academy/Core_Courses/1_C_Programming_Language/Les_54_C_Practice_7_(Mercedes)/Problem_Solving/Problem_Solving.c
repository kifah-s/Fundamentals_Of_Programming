//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

// Function to determine the room number
int findRoom(int participants, int duration)
{
    if (duration <= 30)
    {
        return participants <= 10 ? 1 : 2;
    }
    else
    {
        if (participants <= 5)
        {
            return 1;
        }
        else if (participants <= 15)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int T, N, D;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &D);
        printf("%d\n", findRoom(N, D));
    }

    printf("\n\n");

    return 0;
}
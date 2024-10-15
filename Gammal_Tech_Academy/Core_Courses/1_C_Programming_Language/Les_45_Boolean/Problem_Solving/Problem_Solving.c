//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

bool canPark(char *vehicleSize, int zone)
{
    if ((strcmp(vehicleSize, "Small") == 0 && zone == 1) ||
        (strcmp(vehicleSize, "Medium") == 0 && zone == 2) ||
        (strcmp(vehicleSize, "Large") == 0 && zone == 3))
    {
        return true;
    }
    return false;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int T, N, zone;
    char vehicleSize[10];
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%s %d", vehicleSize, &zone);
            if (canPark(vehicleSize, zone))
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }
        }
    }

    printf("\n\n");

    return 0;
}
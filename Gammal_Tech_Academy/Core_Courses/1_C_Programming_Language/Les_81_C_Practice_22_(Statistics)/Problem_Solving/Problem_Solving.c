//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void generateAccessCode(char name[], char location[], char startDate[],
                        char endDate[])
{
    char accessCode[50];
    sprintf(accessCode, "%s %c%c%s-%s-%s", name, location[0],
            location[1], &startDate[8], startDate, endDate);
    printf("%s\n", accessCode);
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int T;
    scanf("%d", &T);
    while (T--)
    {
        char name[20], location[20], startDate[11], endDate[11];
        scanf("%s %s", name, location);
        scanf("%s %s", startDate, endDate);
        generateAccessCode(name, location, startDate, endDate);
    }

    printf("\n\n");

    return 0;
}
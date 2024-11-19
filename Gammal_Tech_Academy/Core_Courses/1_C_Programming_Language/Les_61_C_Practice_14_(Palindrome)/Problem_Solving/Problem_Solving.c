//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

typedef struct
{
    char identifier[50];
    int value;
} DataEntry;

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

    int n, i;
    scanf("%d", &n);

    DataEntry entries[n];

    for (i = 0; i < n; i++)
    {
        scanf("%s %d", entries[i].identifier, &entries[i].value);
    }
    printf("EvenTable: ");

    for (i = 0; i < n; i++)
    {
        if (entries[i].value % 2 == 0)
        {
            printf("%s ", entries[i].identifier);
        }
    }
    printf("\nOddTable: ");

    for (i = 0; i < n; i++)
    {
        if (entries[i].value % 2 != 0)
        {
            printf("%s ", entries[i].identifier);
        }
    }

    printf("\n\n");

    return 0;
}
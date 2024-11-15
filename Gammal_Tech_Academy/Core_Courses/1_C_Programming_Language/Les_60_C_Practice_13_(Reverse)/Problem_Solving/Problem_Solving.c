//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 1000
#define MAX_LENGTH 101

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

    char entries[MAX_ENTRIES][MAX_LENGTH];
    int N, i, j, uniqueCount = 0;
    scanf("%d\n", &N);
    for (i = 0; i < N; i++)
    {
        fgets(entries[i], MAX_LENGTH, stdin);
        entries[i][strcspn(entries[i], "\n")] = 0; // Remove newline character
    }
    printf("%d\n", uniqueCount);
    for (i = 0; i < N; i++)
    {
        int isDuplicate = 0;
        for (j = 0; j < i; j++)
        {
            if (strcmp(entries[i], entries[j]) == 0)
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            printf("%s\n", entries[i]);
            uniqueCount++;
        }
    }

    printf("\n\n");

    return 0;
}
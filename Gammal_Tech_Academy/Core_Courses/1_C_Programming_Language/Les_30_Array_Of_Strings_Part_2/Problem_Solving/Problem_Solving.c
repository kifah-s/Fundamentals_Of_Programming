//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PROJECTS 1000
#define MAX_LENGTH 101

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

// Function to compare two strings based on the problem's requirement
int compare(const void *a, const void *b)
{
    char *strA = *(char **)a;
    char *strB = *(char **)b;
    int lenA = strlen(strA);
    int lenB = strlen(strB);
    if (lenA == lenB)
        return strcmp(strA, strB);
    return lenA - lenB;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    scanf("%d", &N);
    char *projects[MAX_PROJECTS];
    for (int i = 0; i < N; i++)
    {
        projects[i] = malloc(MAX_LENGTH);
        scanf("%s", projects[i]);
    }
    qsort(projects, N, sizeof(char *), compare);
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", projects[i]);
        free(projects[i]);
    }

    printf("\n\n");

    return 0;
}
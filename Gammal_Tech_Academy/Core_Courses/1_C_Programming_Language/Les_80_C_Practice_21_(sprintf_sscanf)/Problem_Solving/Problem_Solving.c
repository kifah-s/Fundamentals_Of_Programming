//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[100];
    int travelTime;
} Employee;

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

int compare(const void *a, const void *b)
{
    Employee *empA = (Employee *)a;
    Employee *empB = (Employee *)b;
    if (empA->travelTime == empB->travelTime)
        return strcmp(empA->name, empB->name);
    return empA->travelTime - empB->travelTime;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    scanf("%d", &n);
    Employee employees[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", employees[i].name, &employees[i].travelTime);
    }
    qsort(employees, n, sizeof(Employee), compare);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", employees[i].name);
    }

    printf("\n\n");

    return 0;
}
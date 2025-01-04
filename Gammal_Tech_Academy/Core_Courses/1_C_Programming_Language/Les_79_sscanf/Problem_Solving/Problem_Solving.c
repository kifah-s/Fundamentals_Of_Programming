//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

typedef struct
{
    char id[11];
    char size;
    char color[11];
    char setup[51];
} Employee;

int main()
{
    problemSolvingFun();

    int n, m;
    scanf("%d", &n);
    Employee employees[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %c %s", employees[i].id, &employees[i].size,
              employees[i].color);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        char id[11], setup[51];
        scanf("%s %s", id, setup);
        for (int j = 0; j < n; j++)
        {
            if (strcmp(employees[j].id, id) == 0)
            {
                strcpy(employees[j].setup, setup);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s: Size %c, Color %s, Setup %s\n", employees[i].id,
               employees[i].size, employees[i].color, employees[i].setup);
    }

    printf("\n\n");

    return 0;
}
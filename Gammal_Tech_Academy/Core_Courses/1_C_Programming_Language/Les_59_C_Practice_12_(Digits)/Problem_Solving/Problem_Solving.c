//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

typedef struct
{
    int id;
    char name[50];
    int dept_id;
} Employee;

typedef struct
{
    int id;
    char name[50];
    int manager_id;
} Department;

Employee employees[100];
Department departments[100];
int emp_count = 0, dept_count = 0;

void addEmployee(int id, char *name, int dept_id)
{
    employees[emp_count].id = id;
    strcpy(employees[emp_count].name, name);
    employees[emp_count].dept_id = dept_id;
    emp_count++;
}

void addDepartment(int id, char *name)
{
    departments[dept_count].id = id;
    strcpy(departments[dept_count].name, name);
    departments[dept_count].manager_id = -1;
    dept_count++;
}

void assignManager(int dept_id, int manager_id)
{
    for (int i = 0; i < dept_count; i++)
    {
        if (departments[i].id == dept_id)
        {
            departments[i].manager_id = manager_id;
            break;
        }
    }
}

void listEmployees(int dept_id)
{
    int found = 0;
    for (int i = 0; i < emp_count; i++)
    {
        if (employees[i].dept_id == dept_id)
        {
            if (found > 0)
                printf(", ");
            printf("%s", employees[i].name);
            found++;
        }
    }
    if (found == 0)
        printf("No employees");
    printf("\n");
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int Q, query_type, id, dept_id;
    char name[50];
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++)
    {
        scanf("%d", &query_type);
        switch (query_type)
        {
        case 1:
            scanf("%d %s %d", &id, name, &dept_id);
            addEmployee(id, name, dept_id);
            break;
        case 2:
            scanf("%d %s", &id, name);
            addDepartment(id, name);
            break;
        case 3:
            scanf("%d %d", &dept_id, &id);
            assignManager(dept_id, id);
            break;
        case 4:
            scanf("%d", &dept_id);
            listEmployees(dept_id);
            break;
        }
    }

    printf("\n\n");

    return 0;
}
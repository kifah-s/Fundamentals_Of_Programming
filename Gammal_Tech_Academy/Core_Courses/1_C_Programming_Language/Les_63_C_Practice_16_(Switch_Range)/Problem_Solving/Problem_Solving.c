//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

//* End Functions ..

// Assuming a structure to represent an Employee
typedef struct
{
    int id;
    char name[50];
    char department[50];
} Employee;

int main()
{
    problemSolvingFun();

    // Sample data
    Employee employees[] = {
        {1, "Alice", "Engineering"},
        {2, "Bob", "Engineering"},
        {3, "Charlie", "HR"}};

    int n = 3; // Number of employees
    char queryDepartment[50];
    printf("Enter the department to filter: ");
    scanf("%s", queryDepartment);

    // Simulating the 'SELECT' SQL operation
    printf("List of Employees in %s Department:\n", queryDepartment);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(employees[i].department, queryDepartment) == 0)
        {
            printf("%s\n", employees[i].name);
        }
    }

    printf("\n\n");

    return 0;
}
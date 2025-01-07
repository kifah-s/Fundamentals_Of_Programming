//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char clothing[50];
    char work_setting[50];
} Employee;

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

    int n, m, i;
    scanf("%d", &n);
    Employee employees[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d, %[^,], %[^,]", &employees[i].id,
              employees[i].clothing, employees[i].work_setting);
    }
    scanf("%d", &m);
    char locations[m][50];
    for (i = 0; i < m; i++)
    {
        scanf("%s", locations[i]);
    }
    int visa_count = 0, pref_count = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d %s\n", employees[i].id, locations[i % m]);
        visa_count++;
        pref_count += 2; // Assuming each employee has 2 unique preferences.
    }
    printf("%d\n%d\n", visa_count, pref_count);

    printf("\n\n");

    return 0;
}
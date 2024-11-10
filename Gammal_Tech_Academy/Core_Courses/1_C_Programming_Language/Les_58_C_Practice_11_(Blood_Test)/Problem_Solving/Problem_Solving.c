//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

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

    int n, load, db[5] = {0}, minLoadIndex;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &load);

        // Find the database with the minimum load
        minLoadIndex = 0;
        for (int j = 1; j < 5; j++)
        {
            if (db[j] < db[minLoadIndex])
            {
                minLoadIndex = j;
            }
        }

        // Assign the query to this database
        db[minLoadIndex] += load;
    }

    // Output the load on each database
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", db[i]);
    }

    printf("\n\n");

    return 0;
}

//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int N;
    cin >> N;

    // Allocating memory using calloc.
    int *projects = (int *)calloc(N, sizeof(int));

    // Checking if memory allocation was successful.
    if (projects == NULL)
    {
        cout << "Memory allocation failed";
        return 1;
    }

    // Reading the number of employees for each project.
    for (int i = 0; i < N; i++)
    {
        cin >> projects[i];
    }

    // Printing the employee allocation
    for (int i = 0; i < N; i++)
    {
        cout << "Project " << (i + 1) << ": " << projects[i] << " Employees " << endl;
    }

    // Freeing the allocated memory
    free(projects);

    cout << endl;

    return 0;
}

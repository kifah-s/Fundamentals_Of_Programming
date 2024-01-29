
//* >>>>> Problem Solving (Version 2) <<<<< */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving (Version 2) .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    // Declare variable.
    int N;
    cin >> N;

    // Dynamic memory allocation
    int *arr = (int *)malloc(N * sizeof(int));

    // Check if memory allocation failed
    if (arr == NULL)
    {
        cout << "Memory allocation failed";
        return 1;
    }

    // Reading and storing integers
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Output the integers
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    // Free the allocated memory
    free(arr);

    cout << endl
         << endl;

    return 0;
}

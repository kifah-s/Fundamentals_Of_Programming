
//* >>>>> Problem Solving (Version 1) <<<<< */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving (Version 1) .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    // Declare Variable.
    int numberOfNumbers = 0;

    // Receive value from user.
    cout << "Please enter the number of numbers you want enter: ";
    cin >> numberOfNumbers;

    // Allocate memory for an integer (4 bytes in most systems).
    int *myInt = (int *)malloc(numberOfNumbers * sizeof(int));

    // Check if the allocation was successful.
    if (myInt != NULL)
    {
        // Allocation succeeded.
        cout << "\nAllocation succeeded.\n"
             << endl;

        // Use the allocated memory.
        for (int i = 0; i < numberOfNumbers; i++)
        {
            cout << "Please enter num " << i + 1 << ": ";
            cin >> myInt[i];
        }

        cout << "\nNumbers is: ";
        // Print array.
        for (int i = 0; i < numberOfNumbers; i++)
        {
            cout << myInt[i] << "   ";
        }

        // free the memory.
        free(myInt);
    }
    else
    {
        // Allocation failed.
        cout << "Allocation failed." << endl;
    }

    cout << endl
         << endl;

    return 0;
}

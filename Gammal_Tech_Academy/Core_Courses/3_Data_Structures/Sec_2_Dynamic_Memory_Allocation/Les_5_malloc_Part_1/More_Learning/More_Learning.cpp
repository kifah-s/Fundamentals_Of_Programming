
//* >>>>> More Learning <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print More Learning / Function.
void moreLearningFun()
{
    cout << endl
         << "More Learning .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    moreLearningFun();

    //* Allocate memory for storing an array of 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));

    //* Check if the allocation was successful
    if (arr != NULL)
    {
        //* Succeeded to allocate memory.
        cout << "Succeeded to allocate memory." << endl;

        //* Use the array
        for (int i = 0; i < 5; ++i)
        {
            cout << i * 10 << endl;
        }

        //* Now you can use the array as needed

        //* Always free the allocated memory when done using it
        free(arr);
    }
    else
    {
        //* Failed to allocate memory.
        cout << "Failed to allocate memory." << endl;
    }

    cout << endl;

    return 0;
}

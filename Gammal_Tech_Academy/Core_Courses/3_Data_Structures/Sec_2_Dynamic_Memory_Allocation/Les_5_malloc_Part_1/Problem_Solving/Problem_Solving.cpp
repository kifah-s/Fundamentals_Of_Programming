
//*  Problem Solving ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <cstdlib>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int N;
    cin >> N;

    // Dynamic memory allocation
    int *arr = (int *)malloc(N * sizeof(int));

    // Check if memory allocation failed
    if (arr == NULL)
    {
        cerr << "Memory allocation failed";
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

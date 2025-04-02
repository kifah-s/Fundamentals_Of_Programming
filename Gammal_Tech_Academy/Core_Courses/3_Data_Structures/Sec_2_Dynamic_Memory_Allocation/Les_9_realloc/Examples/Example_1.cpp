
//*  Example 1 ..

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

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

//* End Functions ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    int *arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initializing data
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Reallocating memory to fit 5 elements
    int *new_arr = (int *)realloc(arr, 5 * sizeof(int));

    if (new_arr == NULL)
    {
        printf("Memory reallocation failed\n");
        free(arr); // Free the old memory
        return 1;
    }

    // Assigning new values
    new_arr[3] = 40;
    new_arr[4] = 50;

    // Printing values
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", new_arr[i]);
    }

    // Free memory
    free(new_arr);

    cout << endl
         << endl;

    return 0;
}

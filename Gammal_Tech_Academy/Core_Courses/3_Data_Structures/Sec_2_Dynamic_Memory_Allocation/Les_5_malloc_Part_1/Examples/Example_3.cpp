
//*  Example 3 ..

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
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 3 ..\n"
         << endl;
}

//* End Functions ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer.
    int *arr;

    // Declare Variable.
    int n = 5;

    // Allocating memory for an array of 5 integers
    // arr = (int *)malloc(20);
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Storing values in the array
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    // Printing the values
    printf("Stored values in the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory after use
    free(arr);

    cout << endl
         << endl;

    return 0;
}

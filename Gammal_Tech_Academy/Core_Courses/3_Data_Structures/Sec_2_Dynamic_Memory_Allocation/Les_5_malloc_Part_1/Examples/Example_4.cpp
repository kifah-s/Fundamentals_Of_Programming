
//*  Example 4 ..

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
    cout << "\n\nYou welcome in Example 4 ..\n"
         << endl;
}

//* End Functions ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer.
    int *ptr;

    // Allocating memory for a single integer.
    // ptr = (int *)malloc(4);
    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }

    *ptr = 10;

    cout << "Stored value: " << *ptr << endl;

    // Free allocated memory after use.
    free(ptr);

    cout << endl
         << endl;

    return 0;
}

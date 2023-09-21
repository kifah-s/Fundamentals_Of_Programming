

//* >>> Float Descending Order Program ( Version 2 ) <<< */

//* >>> Write a C++ function to sort an array of floating-point numbers in Descending order using the insertion sort algorithm. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void floatDescendingOrderARRFun(float arr[], int s);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    float array[] = {2.2, 5.5, 3.3, 1.1, 4.4};
    int arraySize = sizeof(array) / sizeof(array[0]);
    // ... End Variables ...

    // ... Functions ...
    floatDescendingOrderARRFun(array, arraySize);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Float Descending Order Program ( Version 2 ) .." << endl
         << endl;
}

// Float Descending Order for Array / Function.
void floatDescendingOrderARRFun(float arr[], int s)
{
    cout << "Array Before Float Descending Order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    sort(arr, arr + s, greater<int>());
    cout << "Array After Float Descending Order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
// *** End Functions ***

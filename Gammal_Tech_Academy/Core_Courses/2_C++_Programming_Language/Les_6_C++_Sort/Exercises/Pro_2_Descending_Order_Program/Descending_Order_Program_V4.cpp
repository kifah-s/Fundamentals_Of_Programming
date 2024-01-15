

//* >>> Descending Order Program ( Version 4 ) <<< */

//* >>> Sort an array of integers in Descending Order using the built-in sort function. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void descendingOrderVECFun(vector<int> x);
void descendingOrderARRFun(int arr[], int s);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {3, 1, 4, 2, 5};
    int array[] = {3, 1, 4, 2, 5};
    int arraySize = sizeof(array) / sizeof(array[0]);
    // ... End Variables ...

    // ... Functions ...
    descendingOrderVECFun(myVector);
    descendingOrderARRFun(array, arraySize);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Descending Order Program ( Version 4 ) .." << endl
         << endl;
}

// Descending Order for vector / Function.
void descendingOrderVECFun(vector<int> x)
{
    cout << "Vector Before Descending Order:" << endl;
    for (int i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    cout << "Vector After Descending Order:" << endl;
    for (int i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;
}

// Descending Order for Array / Function.
void descendingOrderARRFun(int arr[], int s)
{
    cout << "Array Before Descending Order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    sort(arr, arr + s);
    reverse(arr, arr + s);
    cout << "Array After Descending Order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
// *** End Functions ***

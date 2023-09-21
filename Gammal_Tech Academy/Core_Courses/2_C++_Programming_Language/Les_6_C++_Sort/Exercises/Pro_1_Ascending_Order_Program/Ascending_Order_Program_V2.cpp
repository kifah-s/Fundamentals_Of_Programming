

//* >>> Ascending Order Program ( Version 2 ) <<< */

//* >>> Sort an array of integers in ascending order using the built-in sort function. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void ascendingOrderVECFun(vector<int> x);
void ascendingOrderARRFun(int arr[], int s);
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
    ascendingOrderVECFun(myVector);
    ascendingOrderARRFun(array, arraySize);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Ascending Order Program ( Version 2 ) .." << endl
         << endl;
}

// Ascending Order for vector / Function.
void ascendingOrderVECFun(vector<int> x)
{
    cout << "Vector Before ascending order:" << endl;
    for (int i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    sort(x.begin(), x.end());
    cout << "Vector After ascending order:" << endl;
    for (int i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;
}

// Ascending Order for Array / Function.
void ascendingOrderARRFun(int arr[], int s)
{
    cout << "Array Before ascending order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    sort(arr, arr + s);
    cout << "Array After ascending order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
// *** End Functions ***

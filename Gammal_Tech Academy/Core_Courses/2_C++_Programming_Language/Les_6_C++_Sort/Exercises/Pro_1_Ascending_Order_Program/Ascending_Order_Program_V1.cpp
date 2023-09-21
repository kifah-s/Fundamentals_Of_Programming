

//* >>> Ascending Order Program ( Version 1 ) <<< */

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
void ascendingOrderARRFun(int arr[5]);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {3, 1, 4, 2, 5};
    int array[5] = {3, 1, 4, 2, 5};
    // ... End Variables ...

    // ... Functions ...
    ascendingOrderVECFun(myVector);
    ascendingOrderARRFun(array);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Ascending Order Program ( Version 1 ) .." << endl
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
void ascendingOrderARRFun(int arr[5])
{
    cout << "Array Before ascending order:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    sort(arr, arr + 5);
    cout << "Array After ascending order:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
// *** End Functions ***

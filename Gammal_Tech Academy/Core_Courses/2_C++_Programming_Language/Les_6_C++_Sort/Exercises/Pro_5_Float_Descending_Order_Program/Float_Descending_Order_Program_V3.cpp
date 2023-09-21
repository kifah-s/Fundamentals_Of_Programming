

//* >>> Float Descending Order Program ( Version 3 ) <<< */

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
void floatDescendingOrderVECFun(vector<float> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<float> myVector = {5.5, 3.3, 1.1, 2.2, 4.4};
    // ... End Variables ...

    // ... Functions ...
    floatDescendingOrderVECFun(myVector);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Float Descending Order Program ( Version 3 ) .." << endl
         << endl;
}

// Float Descending Order for vector / Function.
void floatDescendingOrderVECFun(vector<float> x)
{
    /* cout << "Vector Before Float Descending Order:" << endl;
    for (float i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    cout << "Vector After Float Descending Order:" << endl;
    for (float i : x)
    {
        cout << i << " ";
    }
    cout << endl
         << endl; */

    //* -----------------------------------------------

    cout << "Vector Before Float Descending Order:" << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl
         << endl;

    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    cout << "Vector After Float Descending Order:" << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl
         << endl;
}
// *** End Functions ***

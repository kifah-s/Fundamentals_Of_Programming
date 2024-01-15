

//* >>> Reverse Program ( Version 1 ) <<< */

//* >>> How to reverse a vector? <<< */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void reverseVecFun(vector<int> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {1, 2, 3, 4, 5};
    // ... End Variables ...

    // ... Functions ...
    reverseVecFun(myVector);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Reverse Program ( Version 1 ) .." << endl
         << endl;
}

// Reverse vector / Function.
void reverseVecFun(vector<int> x)
{
    for (int i = x.size() - 1; i >= 0; i--)
    {
        cout << x[i] << endl;
    }
    cout << endl
         << endl;
}
// *** End Functions ***

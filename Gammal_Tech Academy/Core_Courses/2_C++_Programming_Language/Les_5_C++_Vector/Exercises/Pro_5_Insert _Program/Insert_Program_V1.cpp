

//* >>> Insert Program ( Version 1 ) <<< */

//* >>> How to insert an element at the end of a vector? <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void insertFun(vector<int> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector;
    // ... End Variables ...

    // ... Functions ...
    insertFun(myVector);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Insert Program ( Version 1 ) .." << endl
         << endl;
}

// Ascending Order for vector / Function.
void insertFun(vector<int> x)
{
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    x.push_back(5);
    
    for (int i : x)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;
}
// *** End Functions ***

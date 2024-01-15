

//* >>> Insert Program ( Version 2 ) <<< */

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
void insertFun(vector<int> x, int ele1, int ele2);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {1, 2, 3};
    int element_1 = 4, element_2 = 5;
    // ... End Variables ...

    // ... Functions ...
    insertFun(myVector, element_1, element_2);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Insert Program ( Version 2 ) .." << endl
         << endl;
}

// Ascending Order for vector / Function.
void insertFun(vector<int> x, int ele1, int ele2)
{
    x.push_back(ele1);
    x.push_back(ele2);

    for (int i : x)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;
}
// *** End Functions ***

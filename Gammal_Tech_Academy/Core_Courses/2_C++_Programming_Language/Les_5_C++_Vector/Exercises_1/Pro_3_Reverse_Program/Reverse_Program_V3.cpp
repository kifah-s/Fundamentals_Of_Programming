

//* >>> Reverse Program ( Version 3 ) <<< */

//* >>> How to reverse a vector? <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void reverseVecFun(vector<int> x, vector<int> revX);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {1, 2, 3, 4, 5}, myRevVec;
    // ... End Variables ...

    // ... Functions ...
    reverseVecFun(myVector, myRevVec);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Reverse Program ( Version 3 ) .." << endl
         << endl;
}

// Reverse vector / Function.
void reverseVecFun(vector<int> x, vector<int> revX)
{
    revX = x;
    reverse(revX.begin(), revX.end());

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
    cout << endl;
    cout << "-----------------" << endl;
    cout << endl;

    for (int i = 0; i < revX.size(); i++)
    {
        cout << revX[i] << endl;
    }
    cout << endl
         << endl;
}
// *** End Functions ***

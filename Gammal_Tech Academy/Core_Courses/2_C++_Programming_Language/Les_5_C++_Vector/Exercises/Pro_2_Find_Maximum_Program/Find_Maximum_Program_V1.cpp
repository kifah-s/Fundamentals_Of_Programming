

//* >>> Find Maximum Program ( Version 1 ) <<< */

//* >>> How to find the maximum element in a vector? <<< */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void findMaximumFun(vector<int> x, int sum);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {1, 2, 3, 4, 5};
    int maximumNumber = myVector[0];
    // ... End Variables ...

    // ... Functions ...
    findMaximumFun(myVector, maximumNumber);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Find Maximum Program ( Version 1 ) .." << endl
         << endl;
}

// Sum Of All numbers in vector / Function.
void findMaximumFun(vector<int> x, int max)
{
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
        
    }
    cout << "Maximum Numbers In Vector is: " << max << endl
         << endl
         << endl;
}
// *** End Functions ***

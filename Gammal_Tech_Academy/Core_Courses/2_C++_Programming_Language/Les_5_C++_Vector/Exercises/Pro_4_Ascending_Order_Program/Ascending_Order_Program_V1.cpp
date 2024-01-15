

//* >>> Ascending Order Program ( Version 1 ) <<< */

//* >>> How to sort a vector in ascending order? <<< */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void ascendingOrderFun(vector<int> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {3, 5, 1, 4, 2};
    // ... End Variables ...

    // ... Functions ...
    ascendingOrderFun(myVector);
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
void ascendingOrderFun(vector<int> x)
{
    // Sort the vector in ascending order
    for (int i = 0; i < x.size() - 1; i++)
    {
        for (int j = i + 1; j < x.size(); j++)
        {
            if (x[i] > x[j])
            {
                // Swap the elements
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    // Print the sorted vector
    for (int i : x)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;
}
// *** End Functions ***

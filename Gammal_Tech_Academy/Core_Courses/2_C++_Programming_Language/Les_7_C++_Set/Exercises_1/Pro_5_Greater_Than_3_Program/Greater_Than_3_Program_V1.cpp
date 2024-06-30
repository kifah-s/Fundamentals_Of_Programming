

// >>> Greater Than 3 Program ( Version 1 ) <<< */

// >>> Create a set and insert the values 1, 2, 3, 4, and 5. Find the first value in the set that is greater than 3 and print it. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void greaterThan3Fun(set<int> n);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat Set.
    set<int> mySet = {1, 2, 3, 4, 5};

    // Find the first value in the set that is greater than 3 and print it.
    greaterThan3Fun(mySet);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Greater Than 3 Program ( Version 1 ) .." << endl
         << endl;
}

// Find the first value in the set that is greater than 3 and print it. / Function.
void greaterThan3Fun(set<int> n)
{
    for (auto ele : n)
    {
        if (ele > 3 && ele < 5)
        {
            cout << ele << " ";
        }
    }

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...

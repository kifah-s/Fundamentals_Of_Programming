

// >>> Greater Than 3 Program ( Version 2 ) <<< */

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
         << "You welcome in Greater Than 3 Program ( Version 2 ) .." << endl
         << endl;
}

// Find the first value in the set that is greater than 3 and print it. / Function.
void greaterThan3Fun(set<int> n)
{
    // Find the first value in the set greater than 3 and print it
    auto it = n.upper_bound(3);
    
    if (it != n.end())
    {
        cout << "The first value greater than 3 is: " << *it << endl;
    }
    else
    {
        cout << "No value greater than 3 found in the set." << endl;
    }

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...



// >>> Empty Set Program ( Version 1 ) <<< */

// >>> Create an empty set and insert the values 3, 5, and 7. Print the contents of the set. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
set<int> AddEleFun(set<int> x);
void printSetFun(set<int> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat Empty Set.
    set<int> mySet;

    // Adding Elements To Set.
    mySet = AddEleFun(mySet);

    // print set.
    printSetFun(mySet);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Empty Set Program ( Version 1 ) .." << endl
         << endl;
}

// Adding Elements To Set / Function.
set<int> AddEleFun(set<int> x)
{
    x.insert(7);
    x.insert(3);
    x.insert(3);
    x.insert(5);
    x.insert(5);

    return x;
}

// Print set / Function.
void printSetFun(set<int> x)
{
    cout << "Items in set is: ";
    for (int element : x)
    {
        cout << element << " ";
    }
    cout << endl
         << endl
         << endl;
}
// ... End Functions ...

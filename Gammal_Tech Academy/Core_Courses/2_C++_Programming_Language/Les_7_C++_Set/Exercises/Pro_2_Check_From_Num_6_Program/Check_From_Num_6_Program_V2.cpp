

// >>> Check From Num 6 Program ( Version 2 ) <<< */

// >>> Create a set and insert the values 2, 4, 6, 8, and 10. Check if the value 6 is in the set. If it is, remove it and print the updated contents of the set. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
set<int> AddEleFun(set<int> x);
set<int> number6Fun(set<int> x);
void printSetFun(set<int> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat Empty Set.
    set<int> mySet;

    // Adding Elements To Set.
    mySet = AddEleFun(mySet);

    // Check from number 6 And remove it.
    mySet = number6Fun(mySet);

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
         << "You welcome in Check From Num 6 Program ( Version 2 ) .." << endl
         << endl;
}

// Adding Elements To Set / Function.
set<int> AddEleFun(set<int> x)
{
    x.insert(2);
    x.insert(4);
    x.insert(6);
    x.insert(8);
    x.insert(10);

    return x;
}

// Check from number 6 and remove it / Function.
set<int> number6Fun(set<int> x)
{
    // check if 6 is in the set
    if (x.count(6) > 0)
    {
        x.erase(6); // remove 6 from the set
    }

    return x;
}

// Print set / Function.
void printSetFun(set<int> x)
{
    cout << "Items in set is: ";
    /* for (int element : x)
    {
        cout << element << " ";
    } */
    for (auto element : x)
    {
        cout << element << " ";
    }
    cout << endl
         << endl
         << endl;
}
// ... End Functions ...

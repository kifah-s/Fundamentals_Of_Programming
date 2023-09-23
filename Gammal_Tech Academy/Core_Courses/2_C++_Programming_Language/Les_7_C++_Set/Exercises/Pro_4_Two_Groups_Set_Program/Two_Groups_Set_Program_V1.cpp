

// >>> Two Groups Set Program ( Version 1 ) <<< */

// >>> Create two sets and insert the values 1, 3, and 5 into the first set and the values 2, 4, and 6 into the second set. Merge the two sets into a new set and print the contents of the new set. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
set<int> mergeSet1Set2Fun(set<int> x, set<int> y, set<int> n);
void printNewSetFun(set<int> n);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat Sets.
    set<int> mySet_1 = {1, 3, 5}, mySet_2 = {2, 4, 6}, newSet;

    // Merge mySet_1 and mySet_2 in a new set.
    newSet = mergeSet1Set2Fun(mySet_1, mySet_2, newSet);

    // Print new set.
    printNewSetFun(newSet);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Two Groups Set Program ( Version 1 ) .." << endl
         << endl;
}

// Merge mySet_1 and mySet_2 in a new set / Function
set<int> mergeSet1Set2Fun(set<int> x, set<int> y, set<int> n)
{
    n.insert(x.begin(), x.end());
    n.insert(y.begin(), y.end());

    return n;
}

// Print new set / Function.
void printNewSetFun(set<int> n)
{
    cout << "New Set = ";
    for (auto i : n)
    {
        cout << i << " ";
    }

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...

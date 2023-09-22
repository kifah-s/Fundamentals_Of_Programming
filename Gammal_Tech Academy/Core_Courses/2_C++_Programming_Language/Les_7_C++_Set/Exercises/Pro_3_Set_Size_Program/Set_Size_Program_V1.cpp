

// >>> Set Size Program ( Version 1 ) <<< */

// >>> Create a set and insert the values 1, 2, 3, 4, and 5. Print the size of the set. Clear the set and print the size of the set again. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
set<int> AddEleFun(set<int> x);
void deleteEleFun(set<int> x);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat Empty Set.
    set<int> mySet;

    // Adding Elements To Set and Calculate set size.
    mySet = AddEleFun(mySet);

    // Delete Elements from Set and Calculate set size.
    deleteEleFun(mySet);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Set Size Program ( Version 1 ) .." << endl
         << endl;
}

// Adding Elements To Set and Calculate set size. / Function.
set<int> AddEleFun(set<int> x)
{
    x.insert(2);
    x.insert(4);
    x.insert(6);
    x.insert(8);
    x.insert(10);

    int s = x.size();

    cout << "Set size after adding elements = " << s << endl
         << endl;

    return x;
}

// Delete Elements from Set and Calculate set size / Function.
void deleteEleFun(set<int> x)
{
    x.clear();
    int s = x.size();

    cout << "Set size after delete elements = " << s << endl;

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...

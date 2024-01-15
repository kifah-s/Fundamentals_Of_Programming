

/* >>> Remove Pair Program ( Version 3 ) <<< */

/* >>> write a program that remove a pair from a set of pairs. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<string, int>> mySet;
     // ... End Variables ...

     mySet.insert(make_pair("apple", 5));
     mySet.insert(make_pair("banana", 2));
     mySet.insert(make_pair("cherry", 7));
     mySet.insert(make_pair("date", 3));

     pair<string, int> myPair = make_pair("banana", 2);
     mySet.erase(myPair);

     cout << "The set after removing the pair (" << myPair.first << ", " << myPair.second << "):" << endl;

     for (auto it = mySet.begin(); it != mySet.end(); ++it)
     {
          cout << "(" << it->first << ", " << it->second << ")" << endl;
     }

     cout << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Remove Pair Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...
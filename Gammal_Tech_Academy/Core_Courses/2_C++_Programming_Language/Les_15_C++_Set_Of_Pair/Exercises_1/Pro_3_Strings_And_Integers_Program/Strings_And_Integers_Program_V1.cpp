

/* >>> Strings And Integers Program ( Version 1 ) <<< */

/* >>> Create a set of pairs of strings and integers, and iterate through it to print out the elements <<< */

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

     mySet.insert({"c", 1});
     mySet.insert({"d", 2});
     mySet.insert({"a", 3});
     mySet.insert({"e", 4});
     mySet.insert({"b", 5});

     for (auto it = mySet.begin(); it != mySet.end(); it++)
     {
          cout << it->first << "   " << it->second << endl;
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
          << "You welcome in Strings And Integers Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...
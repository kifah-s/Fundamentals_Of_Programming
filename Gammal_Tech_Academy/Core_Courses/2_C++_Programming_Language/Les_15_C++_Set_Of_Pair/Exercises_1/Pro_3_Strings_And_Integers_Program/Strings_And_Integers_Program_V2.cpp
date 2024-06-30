

/* >>> Strings And Integers Program ( Version 2 ) <<< */

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
     set<pair<string, int>> mySet = {{"c", 1}, {"d", 2}, {"a", 3}, {"e", 4}, {"b", 5}};
     // ... End Variables ...

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
          << "You welcome in Strings And Integers Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...
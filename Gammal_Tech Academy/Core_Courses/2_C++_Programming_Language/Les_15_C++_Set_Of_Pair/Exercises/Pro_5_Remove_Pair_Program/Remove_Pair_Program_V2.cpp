

/* >>> Remove Pair Program ( Version 2 ) <<< */

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
     set<pair<string, int>> my_set = {
         {"apple", 1},
         {"banana", 2},
         {"cherry", 3},
     };
     // ... End Variables ...

     cout << "Before: " << endl;
     for (auto pair : my_set)
     {
          cout << pair.first << " " << pair.second << endl;
     }

     cout << endl
          << endl;

     // ... Functions ...
     my_set.erase({"apple", 1});
     my_set.erase({"banana", 2});
     my_set.erase({"cherry", 3});
     // ... End Functions ...

     cout << "After: " << endl;
     for (auto pair : my_set)
     {
          cout << pair.first << " " << pair.second << endl;
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
          << "You welcome in Remove Pair Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...
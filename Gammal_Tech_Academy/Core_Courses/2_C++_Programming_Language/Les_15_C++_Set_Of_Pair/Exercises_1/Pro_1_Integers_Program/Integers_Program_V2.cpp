

/* >>> Integers Program ( Version 2 ) <<< */

/* >>> Create a set of pairs of integers, and insert some elements into it. <<< */

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
     set<pair<int, int>> my_set;
     // ... End Variables ...

     my_set.insert({1, 2});
     my_set.insert({3, 4});
     my_set.insert({5, 6});

     // ... Functions ...
     // ... End Functions ...

     for (auto it = my_set.begin(); it != my_set.end(); ++it)
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
          << "You welcome in Integers Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...
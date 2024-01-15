

/* >>> Integers Program ( Version 1 ) <<< */

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
set<pair<int, int>> addIntegersFun(set<pair<int, int>> s, pair<int, int> p);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<int, int>> s;
     set<pair<int, int>>::iterator it;
     pair<int, int> p;
     // ... End Variables ...

     // ... Functions ...
     s = addIntegersFun(s, p);
     // ... End Functions ...

     for (it = s.begin(); it != s.end(); it++)
     {
          cout << (*it).first << " ";
          cout << (*it).second << endl;
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
          << "You welcome in Integers Program ( Version 1 ) .." << endl
          << endl;
}

// Add Integers / Function.
set<pair<int, int>> addIntegersFun(set<pair<int, int>> s, pair<int, int> p)
{
     p.first = 1;
     p.second = 2;
     s.insert(p);

     p.first = 3;
     p.second = 4;
     s.insert(p);

     return s;
}
// ... End Functions ...
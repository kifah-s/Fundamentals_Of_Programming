

/* >>> First Element Program ( Version 3 ) <<< */

/* >>> Write a function that takes a set of pairs of integers as input, and returns a new set with only the elements whose first element is even. <<< */

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
set<pair<int, int>> filter_set(const set<pair<int, int>> &input_set);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<int, int>> my_set = {{1, 2}, {2, 4}, {3, 6}, {4, 8}};
     set<pair<int, int>> even_first_set = filter_set(my_set);
     // ... End Variables ...

     // ... Functions ...
     // ... End Functions ...

     for (auto it = even_first_set.begin(); it != even_first_set.end(); ++it)
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
          << "You welcome in First Element Program ( Version 3 ) .." << endl
          << endl;
}

// returns a new set whose first element is even. / Function.
set<pair<int, int>> filter_set(const set<pair<int, int>> &input_set)
{
     set<pair<int, int>> output_set;
     for (auto it = input_set.begin(); it != input_set.end(); ++it)
     {
          if (it->first % 2 == 0)
          {
               output_set.insert(*it);
          }
     }
     return output_set;
}
// ... End Functions ...


/* >>> First Element Program ( Version 1 ) <<< */

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
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...

     // ... End Variables ...

     // ... Functions ...
     // ... End Functions ...

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
          << "You welcome in First Element Program ( Version 1 ) .." << endl
          << endl;
}

// returns a new set whose first element is even. / Function.
void newSetFirstElementFun(set<pair<int, int>> a)
{
     a.insert({1, 2});
     a.insert({4, 3});
     a.insert({5, 6});
     a.insert({8, 7});
     a.insert({9, 10});

     
}
// ... End Functions ...
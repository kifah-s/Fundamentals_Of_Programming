

/* >>> First Element Program ( Version 2 ) <<< */

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
set<pair<int, int>> newSetFirstElementFun(set<pair<int, int>> s, set<pair<int, int>> N_s);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<int, int>> mySet, myNewSet;
     pair<int, int> p;
     // ... End Variables ...

     cout << "Please enter 5 pairs of numbers: " << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << "Husband " << i + 1 << ":" << endl;
          cout << "Num 1: ";
          cin >> p.first;

          cout << "Num 2: ";
          cin >> p.second;

          mySet.insert(p);

          cout << endl
               << endl;
     }

     // ... Functions ...
     myNewSet = newSetFirstElementFun(mySet, myNewSet);
     // ... End Functions ...

     cout << "first element is even:" << endl;
     for (auto it = myNewSet.begin(); it != myNewSet.end(); it++)
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
          << "You welcome in First Element Program ( Version 2 ) .." << endl
          << endl;
}

// returns a new set whose first element is even. / Function.
set<pair<int, int>> newSetFirstElementFun(set<pair<int, int>> s, set<pair<int, int>> N_s)
{
     // pair<int, int> N_p; // New Pair;
     for (auto it = s.begin(); it != s.end(); it++)
     {
          if (it->first % 2 == 0)
          {
               // N_p.first = it->first;
               // N_p.second = it->second;

               // N_s.insert(N_p);
               
               N_s.insert(*it);
          }
     }

     return N_s;
}
// ... End Functions ...
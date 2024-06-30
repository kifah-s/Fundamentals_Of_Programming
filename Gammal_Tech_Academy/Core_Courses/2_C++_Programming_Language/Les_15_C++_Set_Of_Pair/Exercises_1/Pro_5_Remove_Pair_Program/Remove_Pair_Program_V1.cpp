

/* >>> Remove Pair Program ( Version 1 ) <<< */

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
set<pair<float, float>> removePairFromSetFun(set<pair<float, float>> s);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<float, float>> mySet = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
     // ... End Variables ...

     cout << "Before: " << endl;
     for (auto it = mySet.begin(); it != mySet.end(); it++)
     {
          cout << it->first << " " << it->second << endl;
     }

     cout << endl
          << endl;

     // ... Functions ...
     mySet = removePairFromSetFun(mySet);
     // ... End Functions ...

     cout << "After: " << endl;
     for (auto it = mySet.begin(); it != mySet.end(); it++)
     {
          cout << it->first << " " << it->second << endl;
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
          << "You welcome in Remove Pair Program ( Version 1 ) .." << endl
          << endl;
}

//  Remove a pair from a set of pairs / Function.
set<pair<float, float>> removePairFromSetFun(set<pair<float, float>> s)
{
     pair<float, float> pairToRemove1 = {1, 2};
     s.erase(pairToRemove1);

     pair<float, float> pairToRemove2 = {3, 4};
     s.erase(pairToRemove2);

     pair<float, float> pairToRemove3 = {5, 6};
     s.erase(pairToRemove3);

     pair<float, float> pairToRemove4 = {7, 8};
     s.erase(pairToRemove4);

     pair<float, float> pairToRemove5 = {9, 10};
     s.erase(pairToRemove5);

     return s;
}
// ... End Functions ...


/* >>> Floats Program ( Version 1 ) <<< */

/* >>> Write a function that takes a set of pairs of floats as input, and returns the sum of all the second elements. <<< */

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
float sumAllSecondElementsFun(set<pair<float, float>> s, float f);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<float, float>> mySet = {{1, 2.1}, {3, 4.2}, {5, 6.3}, {7, 8.4}, {9, 10.5}};
     float sumAllSecondElements = 0;
     // ... End Variables ...

     // ... Functions ...
     sumAllSecondElements = sumAllSecondElementsFun(mySet, sumAllSecondElements);
     // ... End Functions ...

     cout << "Sum of all the second elements = " << sumAllSecondElements << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Floats Program ( Version 1 ) .." << endl
          << endl;
}

// Sum of all the second elements / Function.
float sumAllSecondElementsFun(set<pair<float, float>> s, float f)
{
     for (auto it = s.begin(); it != s.end(); it++)
     {
          f += it->second;
     }

     return f;
}
// ... End Functions ...
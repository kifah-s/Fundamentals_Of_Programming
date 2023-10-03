

// >>> First Character Program ( Version 1 ) <<< */

/* >>> Write a function that takes a pair of strings as input, and returns a new pair with the first character of each string. <<< */

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
pair<string, string> firstCharacterFun(pair<string, string> x, pair<string, string> y);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<string, string> pair_1 = {"kifah", "saloum"},
                          pair_2;
     // ... End Variables ...

     // ... Functions ...
     pair_2 = firstCharacterFun(pair_1, pair_2);
     // ... End Functions ...

     cout << "First Character: " << pair_2.first << endl;
     cout << "First Character: " << pair_2.second << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in First Character Program ( Version 1 ) .." << endl
          << endl;
}

// First Character / Function.
pair<string, string> firstCharacterFun(pair<string, string> x, pair<string, string> y)
{
     y.first = x.first[0];
     y.second = x.second[0];

     return y;
}
// ... End Functions ...
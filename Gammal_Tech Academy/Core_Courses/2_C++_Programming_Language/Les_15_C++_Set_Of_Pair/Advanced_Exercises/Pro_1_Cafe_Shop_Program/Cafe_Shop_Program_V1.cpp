

/* >>> Cafe Shop Program ( Version 1 ) <<< */

/* >>> Cafe Shop program ..
Search for the prices of drinks in the café and register them in the program.
The program is required to print a menu of items in order of prices from least expensive to most expensive. <<< */

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
set<pair<int, string>> priceListFun(set<pair<int, string>> pl);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<int, string>> priceList;
     // ... End Variables ...

     // ... Functions ...
     priceList = priceListFun(priceList);
     // ... End Functions ...

     for (auto k : priceList)
     {
          cout << k.first << " - " << k.second << endl;
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
          << "You welcome in Cafe Shop Program ( Version 1 ) .." << endl
          << endl;
}

// Price list / Function.
set<pair<int, string>> priceListFun(set<pair<int, string>> pl)
{
     pl.insert({5, "Water"});
     pl.insert({10, "Coffee"});
     pl.insert({15, "Milk"});

     return pl;
}

// ... End Functions ...
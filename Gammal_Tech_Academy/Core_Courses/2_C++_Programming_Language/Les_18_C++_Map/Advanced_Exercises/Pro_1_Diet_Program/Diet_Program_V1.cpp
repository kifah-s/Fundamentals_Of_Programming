

/* >>> Diet Program ( Version 1 ) <<< */

/* >>> A program for those who hate diet.
Many people love delicious foods and do not want to follow diets, but at the same time they do not want to gain weight. A delicious meal with fewer calories is the ideal choice. You have to write a program that includes some names of meals and their calories.
Required: Find the calories for your favorite foods and write them in a program. When the program is executed, the user’s food choices are displayed on the screen in ascending order. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>

using namespace std;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Diet Program ( Version 1 ) .." << endl
          << endl;
}

// Add elements to map / Function.
map<int, string> addElemetsFun(map<int, string> m)
{
     m = {{200, "chicken"}, {100, "fish"}, {300, "fruits"}};

     return m;
}

// Print map / Function.
void printMapFun(map<int, string> m)
{
     for (auto x : m)
     {
          cout << x.first << " cal - " << x.second << endl;
     }
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat empty map;
     map<int, string> myMap;

     // Add elements to map.
     myMap = addElemetsFun(myMap);

     // Print map.
     printMapFun(myMap);

     cout << endl
          << endl;

     return 0;
}
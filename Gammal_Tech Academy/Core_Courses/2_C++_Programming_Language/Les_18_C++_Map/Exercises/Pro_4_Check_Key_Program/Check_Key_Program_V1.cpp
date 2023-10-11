

/* >>> Check Key Program ( Version 1 ) <<< */

/* >>> Write a C++ program that creates a map with the following key-value pairs: {1: "one", 2: "two", 3: "three", 4: "four"}. Then, check if the key 3 exists in the map and print out "yes" or "no". <<< */

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
          << "You welcome in Check Key Program ( Version 1 ) .." << endl
          << endl;
}

// Add elements to map / Function.
map<int, string> addElemetsFun(map<int, string> m)
{
     m = {{1, "One"},
          {2, "Two"},
          {3, "Three"},
          {4, "Four"}};

     return m;
}

// check if the key 3 exists in the map / Function.
void checkKayFun(map<int, string> m)
{
     bool findKay = false;

     for (auto i : m)
     {
          if (i.first == 3 /* OR >> i.second == "Three" */) // Note: if (i == 3) -> Error .. Because 'i' it is indicator to 'm', and 'm' containing "first - int, second - string".
          {
               cout << "Yes, i find element 3";
               findKay = true;
          }
     }
     if (findKay == false)
     {
          cout << "No, i Not find element 3";
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

     // check if the key 3 exists in the map.
     checkKayFun(myMap);

     cout << endl
          << endl;

     return 0;
}
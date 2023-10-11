

/* >>> Sum Values Program ( Version 1 ) <<< */

/* >>> Write a C++ program that creates a map with the following key-value pairs: {"apple": 3, "banana": 2, "orange": 1}. Then, calculate the sum of the values in the map and print out the result. <<< */

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
          << "You welcome in Sum Values Program ( Version 1 ) .." << endl
          << endl;
}

// Add elements to map / Function.
map<string, int> addElemetsFun(map<string, int> m)
{
     m = {{"apple", 3}, {"banana", 2}, {"orange", 1}};

     return m;
}

// Sum values / Function.
int sumValFun(map<string, int> m, int s)
{
     for (auto x : m)
     {
          s += x.second;
     }

     return s;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat empty map;
     map<string, int> myMap;

     // Creat variable for sum.
     int sum = 0;

     // Add elements to map.
     myMap = addElemetsFun(myMap);

     // Sum values.
     sum = sumValFun(myMap, sum);

     // Print sum.
     cout << "Sum values = " << sum;

     cout << endl
          << endl;

     return 0;
}
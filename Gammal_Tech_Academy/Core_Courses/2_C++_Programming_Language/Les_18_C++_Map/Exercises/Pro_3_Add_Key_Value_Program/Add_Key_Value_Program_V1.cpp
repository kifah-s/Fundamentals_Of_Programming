

/* >>> Add Key Value Program ( Version 1 ) <<< */

/* >>> Write a C++ program that creates a map with the following key-value pairs: {"apple": 3, "banana": 2, "orange": 1}. Then, add a key-value pair for "grape" with value 4 and print out the updated map. <<< */

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
          << "You welcome in Add Key Value Program ( Version 1 ) .." << endl
          << endl;
}

// Add elements to map / Function.
map<string, int> addElemetsFun(map<string, int> m)
{
     m = {{"apple", 3}, {"banana", 2}, {"orange", 1}};

     return m;
}

// Add the key-value 4 / Function.
map<string, int> AddKey4Fun(map<string, int> m)
{
     m["grape"] = 4;
     // m.insert({"grape", 4});

     return m;
}

// Print map / Function.
void printMapFun(map<string, int> m)
{
     for (auto k : m)
     {
          cout << "Key: " << k.first << ", Value: " << k.second << endl;
     }
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Creat empty map;
     map<string, int> myMap;

     // Add elements to map.
     myMap = addElemetsFun(myMap);

     // Print map before Add the key-value 4.
     cout << "My map before Add the key-value 4:" << endl;
     printMapFun(myMap);

     // Add the key-value 4.
     myMap = AddKey4Fun(myMap);

     // Print map after Add the key-value 4.
     cout << endl
          << "My map after Add the key-value 4:" << endl;
     printMapFun(myMap);

     cout << endl
          << endl;

     return 0;
}
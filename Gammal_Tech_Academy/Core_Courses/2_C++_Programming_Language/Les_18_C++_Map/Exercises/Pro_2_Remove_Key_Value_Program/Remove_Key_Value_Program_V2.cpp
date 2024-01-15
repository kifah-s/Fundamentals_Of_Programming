

/* >>> Remove Key Value Program ( Version 2 ) <<< */

/* >>> Write a C++ program that creates a map with the following key-value pairs: {1: "one", 2: "two", 3: "three", 4: "four"}. Then, remove the key-value pair with key 2 and print out the updated map. <<< */

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
          << "You welcome in Remove Key Value Program ( Version 2 ) .." << endl
          << endl;
}

// Add elements to map / Function.
map<int, string> addElemetsFun(map<int, string> m)
{
     m = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}};

     // m[1] = "One";
     // m[2] = "Two";
     // m[3] = "Three";
     // m[4] = "Four";

     // m.insert({1, "One"});
     // m.insert({2, "Two"});
     // m.insert({3, "Three"});
     // m.insert({4, "Four"});

     return m;
}

// remove the key-value 2 / Function.
map<int, string> removeKey2Fun(map<int, string> m)
{
     m.erase(2);

     return m;
}

// Print map / Function.
void printMapFun(map<int, string> m)
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
     map<int, string> myMap;

     // Add elements to map.
     myMap = addElemetsFun(myMap);

     // Print map before remove the key-value 2.
     cout << "My map before remove the key-value 2:" << endl;
     printMapFun(myMap);

     // remove the key-value 2.
     myMap = removeKey2Fun(myMap);

     // Print map after remove the key-value 2.
     cout << endl
          << "My map after remove the key-value 2:" << endl;
     printMapFun(myMap);

     cout << endl
          << endl;

     return 0;
}
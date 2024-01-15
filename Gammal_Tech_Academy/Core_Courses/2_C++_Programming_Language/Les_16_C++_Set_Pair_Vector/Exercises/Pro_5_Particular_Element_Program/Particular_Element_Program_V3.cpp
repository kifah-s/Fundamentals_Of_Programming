

/* >>> Particular Element Program ( Version 3 ) <<< */

/* >>> Write a program that creates a set of strings, adds some elements to it, and then checks if a particular element is present in the set. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// Welcome massage / Function.
void welcomeMassageFun();

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // create a set to store strings.
     set<string> mySet;

     // add some strings to the set.
     mySet.insert("apple");
     mySet.insert("banana");
     mySet.insert("cherry");

     // check if "banana" is in the set.
     if (mySet.count("banana") > 0)
     {
          cout << "The set contains 'banana'" << endl;
     }
     else
     {
          cout << "The set does not contain 'banana'" << endl;
     }

     // check if "orange" is in the set.
     if (mySet.count("orange") > 0)
     {
          cout << "The set contains 'orange'" << endl;
     }
     else
     {
          cout << "The set does not contain 'orange'" << endl;
     }

     cout
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
          << "You welcome inParticular Element Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...
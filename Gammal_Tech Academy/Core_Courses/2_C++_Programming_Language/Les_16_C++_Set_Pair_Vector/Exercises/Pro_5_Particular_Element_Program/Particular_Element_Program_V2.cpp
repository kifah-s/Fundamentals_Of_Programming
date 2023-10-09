

/* >>> Particular Element Program ( Version 2 ) <<< */

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

     // Create a set to storage some elements.
     set<string> mySet = {"ahmad", "mhmad", "kifah", "doha"};

     // Create variable it contains particular element.
     string parElement = {"kifah"};

     // Creat variable for found or not found particular element.
     bool find = false;

     // Check if particular element existing in set and Print particular element if existing in set.
     for (auto k : mySet)
     {
          if (k == parElement)
          {
               cout << "Find particular element in set: " << k;
               find = true;
          }
     }

     // Print particular element not find in set.
     if (find == false)
     {
          cout << "Sorry, Not Find particular element in set.";
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
          << "You welcome inParticular Element Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...
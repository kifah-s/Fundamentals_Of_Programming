

/* >>> Set Of Integers Program ( Version 1 ) <<< */

/* >>> Write a program that creates a set of integers, adds some elements to it, and then prints the size of the set. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

void welcomeMassageFun(); // Welcome massage / Function.

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare set.
     set<int> mySet;

     // Add elements to set.
     mySet.insert(1);
     mySet.insert(2);
     mySet.insert(3);

     // Declare variable for storage vector size.
     int lenSet = mySet.size();

     // Print set length.
     cout << "Set length: " << lenSet << endl;

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
          << "You welcome in Set Of Integers Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...
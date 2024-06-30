

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

     // Create a set to store integers.
     set<int> mySet;

     // Add some integers to the set.
     mySet.insert(1);
     mySet.insert(2);
     mySet.insert(3);

     // Creat variable for store vector size.
     int lenSet = mySet.size();

     // Print the size of the set.
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
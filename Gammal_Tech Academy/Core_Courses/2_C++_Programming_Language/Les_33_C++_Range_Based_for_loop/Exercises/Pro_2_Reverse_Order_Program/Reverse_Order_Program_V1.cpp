

/* >>> Reverse Order Program ( Version 1 ) <<< */

/* >>> Write a program that uses a range-based for loop to print out the characters of a string in reverse order. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>
#include <cstring>

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Reverse Order Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create array.
     string myName = "kifah saloum";

     // Reverse the array using reverse().
     reverse(myName.begin(), myName.end());

     // Print array using range-based for loop.
     for (char c : myName)
     {
          cout << c << " ";
     }

     cout << endl
          << endl;

     return 0;
}
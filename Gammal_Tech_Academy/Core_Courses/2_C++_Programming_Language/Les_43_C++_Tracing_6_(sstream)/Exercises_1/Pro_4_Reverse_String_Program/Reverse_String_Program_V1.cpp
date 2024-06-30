

/* >>> Reverse String Program ( Version 1 ) <<< */

/* >>> Write a C++ program to reverse a given string <<< */

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
          << "You welcome in Reverse String Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Read the date string from the user.
     string input;
     cout << "Enter a string: ";
     getline(cin, input);

     cout << endl;

     // Reverse String.
     reverse(input.begin(), input.end());
     cout << input;

     cout << endl
          << endl
          << endl;

     return 0;
}
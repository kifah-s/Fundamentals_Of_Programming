

/* >>> Reverse String Program ( Version 2 ) <<< */

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
          << "You welcome in Reverse String Program ( Version 2 ) .." << endl
          << endl;
}

// Revers string / Function.
string reverse_string(string str)
{
     string temp_str = str;
     int index_pos = 0;

     for (int x = temp_str.length() - 1; x >= 0; x--)
     {
          str[index_pos] = temp_str[x];
          index_pos++;
     }

     return str;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     cout << "Original string: w3resource";
     cout << "\nReverse string: " << reverse_string("w3resource");
     cout << "\n\nOriginal string: Python";
     cout << "\nReverse string: " << reverse_string("Python");

     cout << endl
          << endl
          << endl;

     return 0;
}
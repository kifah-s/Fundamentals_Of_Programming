

/* >>> Another Character Program ( Version 1 ) <<< */

/* >>> Write a program that takes a string input from the user and
replaces all occurrences of a given character in the string with another character using stringstream. <<< */

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
          << "You welcome in Another Character Program ( Version 1 ) .." << endl
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

     // Convert input from string to stringstream.
     stringstream ss(input);

     // Convert 'r' character to 'k' character.
     char c;
     while (ss >> c)
     {
          if (c == 'r')
          {
               c = 'k';
          }
          cout << c;
     }

     cout << endl
          << endl
          << endl;

     return 0;
}
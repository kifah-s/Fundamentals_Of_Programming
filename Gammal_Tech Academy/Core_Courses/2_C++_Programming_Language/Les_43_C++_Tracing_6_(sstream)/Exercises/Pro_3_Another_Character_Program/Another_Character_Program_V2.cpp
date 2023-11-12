

/* >>> Another Character Program ( Version 2 ) <<< */

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
          << "You welcome in Another Character Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Read the string input from the user
     string input;
     cout << "Enter a string: ";
     getline(cin, input);

     // Read the character to replace and the replacement character from the user
     char old_char, new_char;
     cout << "Enter the character to replace: ";
     cin >> old_char;
     cout << "Enter the replacement character: ";
     cin >> new_char;

     // Replace all occurrences of the old character with the new character using stringstream
     stringstream ss;
     for (char c : input)
     {
          if (c == old_char)
          {
               ss << new_char;
          }
          else
          {
               ss << c;
          }
     }
     string output = ss.str();

     // Print the modified string
     cout << "The modified string is: " << output << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
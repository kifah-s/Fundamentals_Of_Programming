

/* >>> Change Every Letter Program ( Version 2 ) <<< */

/* >>> Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a). <<< */

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
          << "You welcome in Change Every Letter Program ( Version 2 ) .." << endl
          << endl;
}

// Change Every Letter / Function.
string change_letter(string str)
{
     int char_code;

     for (int x = 0; x < str.length(); x++)
     {
          char_code = int(str[x]);

          if (char_code == 122)
          {
               str[x] = char(97);
          }
          else if (char_code == 90)
          {
               str[x] = char(65);
          }
          else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
          {
               str[x] = char(char_code + 1);
          }
     }

     return str;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     cout << "Original string: w3resource";
     cout << "\nNew string: " << change_letter("w3resource");
     cout << "\n\nOriginal string: Python";
     cout << "\nNew string: " << change_letter("Python");

     cout << endl
          << endl
          << endl;

     return 0;
}
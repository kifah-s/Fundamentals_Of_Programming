

/* >>> Change Every Letter Program ( Version 1 ) <<< */

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
          << "You welcome in Change Every Letter Program ( Version 1 ) .." << endl
          << endl;
}

// Change Every Letter / Function.
string changeEveryLetterFun(string str)
{
     string newStr;
     for (int i = 0; i < str.length(); i++)
     {
          if (str[i] == 'z')
          {
               newStr.push_back('a');
          }
          else if (str[i] == 'Z')
          {
               newStr.push_back('A');
          }
          else
          {
               newStr.push_back(str[i] + 1);
          }
     }

     return newStr;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare string.
     string myStr = "ABCabcZz";

     string myNewStr = changeEveryLetterFun(myStr);

     cout << myNewStr;

     cout << endl
          << endl
          << endl;

     return 0;
}
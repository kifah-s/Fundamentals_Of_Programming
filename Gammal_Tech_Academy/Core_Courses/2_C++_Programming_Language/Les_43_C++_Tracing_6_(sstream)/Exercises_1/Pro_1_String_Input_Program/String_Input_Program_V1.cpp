

/* >>> String Input Program ( Version 1 ) <<< */

/* >>> Write a program that takes a string input from the user
and prints each character of the string on a separate line using stringstream. <<< */

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
          << "You welcome in String Input Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare string variable.
     string input;

     // Receive value from user.
     cout << "Please enter any word: ";
     cin >> input;

     cout << endl;

     // Declare stringstream variable.
     stringstream ss;

     // Move value from string variable to stringstream variable.
     ss << input;

     // Prints each character of the string on a separate line.
     char s;
     for (int i = 0; i < input.length(); i++)
     {
          ss >> s;
          cout << s << endl;
     }

     cout << endl
          << endl
          << endl;

     return 0;
}
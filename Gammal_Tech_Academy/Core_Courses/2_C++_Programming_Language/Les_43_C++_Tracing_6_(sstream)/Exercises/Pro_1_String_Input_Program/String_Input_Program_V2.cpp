

/* >>> String Input Program ( Version 2 ) <<< */

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
          << "You welcome in String Input Program ( Version 2 ) .." << endl
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
     cout << "Enter a string: ";
     getline(cin, input);

     cout << endl;

     // Declare stringstream variable and Move value from string variable to stringstream variable.
     stringstream ss(input);

     // Prints each character of the string on a separate line.
     char c;
     while (ss >> c)
     {
          cout << c << endl;
     }

     cout << endl
          << endl
          << endl;

     return 0;
}
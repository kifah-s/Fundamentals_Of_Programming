

/* >>> Volume Rectangular Program ( Version 2 ) <<< */

/* >>> Write a C++ program that calculates the volume of a rectangular prism using the length, width, and height entered by the user. <<< */

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
          << "You welcome in Volume Rectangular Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables to hold length, width, and height of rectangular prism
     float length, width, height;

     // Prompt the user to enter the length, width, and height of the rectangular prism
     cout << "Enter the length of the rectangular prism: ";
     cin >> length;
     cout << "Enter the width of the rectangular prism: ";
     cin >> width;
     cout << "Enter the height of the rectangular prism: ";
     cin >> height;

     // Calculate the volume of the rectangular prism
     float volume = length * width * height;

     // Display the result to the user
     cout << endl
          << "The volume of the rectangular prism is: " << volume << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}


/* >>> Area Of Rectangle Program ( Version 2 ) <<< */

/* >>> Write a C++ program that calculates the area of a rectangle using the length and width entered by the user. <<< */

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
          << "You welcome in Area Of Rectangle Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables to hold length and width of rectangle
     float length, width;

     // Prompt the user to enter the length and width of the rectangle
     cout << "Enter the length of the rectangle: ";
     cin >> length;
     cout << "Enter the width of the rectangle: ";
     cin >> width;

     // Calculate the area of the rectangle
     float area = length * width;

     // Display the result to the user
     cout << endl
          << "The area of the rectangle is: " << area << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
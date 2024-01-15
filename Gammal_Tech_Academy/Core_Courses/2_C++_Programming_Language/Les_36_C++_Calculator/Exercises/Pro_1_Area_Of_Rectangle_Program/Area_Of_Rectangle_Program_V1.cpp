

/* >>> Area Of Rectangle Program ( Version 1 ) <<< */

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
          << "You welcome in Area Of Rectangle Program ( Version 1 ) .." << endl
          << endl;
}

// Calculate area of rectangle / Function.
float CalAreaOfRecFun(float wid, float hei)
{
     float areaOfRectangle = wid * hei;
     return areaOfRectangle;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables.
     float width = 0, height = 0, areaOfRectangle = 0;

     // Receive width and height from user.
     cout << "Please enter rectangle width: ";
     cin >> width;
     cout << "Please enter rectangle height: ";
     cin >> height;

     // Calculate area of rectangle.
     areaOfRectangle = CalAreaOfRecFun(width, height);

     // Print area of rectangle.
     cout << endl
          << "area of rectangle is: " << areaOfRectangle;

     cout << endl
          << endl
          << endl;

     return 0;
}
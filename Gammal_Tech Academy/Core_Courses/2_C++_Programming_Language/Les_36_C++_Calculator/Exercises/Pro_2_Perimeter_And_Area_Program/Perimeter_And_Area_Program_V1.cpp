

/* >>> Perimeter And Area Program ( Version 1 ) <<< */

/* >>> Modify the program from problem 1 to calculate the perimeter of the rectangle in addition to the area. <<< */

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
          << "You welcome in Perimeter And Area Program ( Version 1 ) .." << endl
          << endl;
}

// Calculate area of rectangle / Function.
float calAreaOfRecFun(float wid, float hei)
{
     float areaOfRectangle = wid * hei;
     return areaOfRectangle;
}

// Calculate perimeter of rectangle / Function.
float calPerimeterOfRecFun(float wid, float hei)
{
     float perimeterOfRectangle = (wid + hei) * 2;
     return perimeterOfRectangle;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables.
     float width = 0, height = 0;

     // Receive width and height from user.
     cout << "Please enter rectangle width: ";
     cin >> width;
     cout << "Please enter rectangle height: ";
     cin >> height;

     // Calculate area of rectangle.
     float areaOfRectangle = calAreaOfRecFun(width, height);
     
     // Calculate perimeter of rectangle.
     float perimeterOfRectangle = calPerimeterOfRecFun(width, height);

     // Print area of rectangle.
     cout << endl
          << "area of rectangle is: " << areaOfRectangle;
     
     // Print perimeter of rectangle.
     cout << endl
          << "perimeter of rectangle is: " << perimeterOfRectangle;

     cout << endl
          << endl
          << endl;

     return 0;
}
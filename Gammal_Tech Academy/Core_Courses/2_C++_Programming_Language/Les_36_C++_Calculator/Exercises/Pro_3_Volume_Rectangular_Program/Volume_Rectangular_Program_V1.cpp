

/* >>> Volume Rectangular Program ( Version 1 ) <<< */

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
          << "You welcome in Volume Rectangular Program ( Version 1 ) .." << endl
          << endl;
}

// Calculate volume of rectangle / Function.
float calVolumeOfRecFun(float wid, float hei, float len)
{
     float volumeOfRectangle = wid * hei * len;
     return volumeOfRectangle;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables.
     float width = 0, height = 0, length = 0;

     // Receive width, height and  from user.
     cout << "Please enter rectangle width: ";
     cin >> width;
     cout << "Please enter rectangle height: ";
     cin >> height;
     cout << "Please enter rectangle length: ";
     cin >> length;

     // Calculate volume of rectangle.
     float volumeOfRectangle = calVolumeOfRecFun(width, height, length);

     // Print volume of rectangle.
     cout << endl
          << "volume of rectangle is: " << volumeOfRectangle;

     cout << endl
          << endl
          << endl;

     return 0;
}
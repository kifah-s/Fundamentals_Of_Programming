

/* >>> Surface And Volume Program ( Version 1 ) <<< */

/* >>> Modify the program from problem 3 to calculate the surface area of the rectangular prism in addition to the volume. <<< */

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
          << "You welcome in Surface And Volume Program ( Version 1 ) .." << endl
          << endl;
}

// Calculate volume of rectangle / Function.
float calVolumeOfRecFun(float wid, float hei, float len)
{
     float volumeOfRectangle = wid * hei * len;
     return volumeOfRectangle;
}

// Calculate surface of rectangle / Function.
float calSurfaceOfRecFun(float wid, float hei, float len)
{
     float surfaceOfRectangle = (len * wid + len * hei + wid * hei) * 2;
     return surfaceOfRectangle;
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
     
     // Calculate surface of rectangle.
     float surfaceOfRectangle = calSurfaceOfRecFun(width, height, length);

     // Print volume of rectangle.
     cout << endl
          << "volume of rectangle is: " << volumeOfRectangle;
     
     // Print surface of rectangle.
     cout << endl
          << "surface of rectangle is: " << surfaceOfRectangle;

     cout << endl
          << endl
          << endl;

     return 0;
}
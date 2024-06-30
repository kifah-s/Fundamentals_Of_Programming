

/* >>> Surface And Volume Program ( Version 2 ) <<< */

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
          << "You welcome in Surface And Volume Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables to hold length, width, and height of rectangular prism
     float length, width, height;

     // Prompt the user to enter the length, width, and height of the rectangular
     // prism
     cout << "Enter the length of the rectangular prism: ";
     cin >> length;
     cout << "Enter the width of the rectangular prism: ";
     cin >> width;
     cout << "Enter the height of the rectangular prism: ";
     cin >> height;

     // Calculate the volume and surface area of the rectangular prism
     float volume = length * width * height;
     float surface_area = 2 * (length * width + length * height + width * height);

     // Display the results to the user
     cout << endl
          << "The volume of the rectangular prism is: " << volume
          << endl;
     cout << endl
          << "The surface area of the rectangular prism is: " << surface_area
          << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
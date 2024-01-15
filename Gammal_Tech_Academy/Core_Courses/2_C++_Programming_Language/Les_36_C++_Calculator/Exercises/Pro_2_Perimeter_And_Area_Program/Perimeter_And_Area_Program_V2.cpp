

/* >>> Perimeter And Area Program ( Version 2 ) <<< */

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
          << "You welcome in Perimeter And Area Program ( Version 2 ) .." << endl
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

     // Calculate the area and perimeter of the rectangle
     float area = length * width;
     float perimeter = 2 * (length + width);

     // Display the results to the user
     cout << endl
          << "The area of the rectangle is: " << area << endl;
     cout << endl
          << "The perimeter of the rectangle is: " << perimeter << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
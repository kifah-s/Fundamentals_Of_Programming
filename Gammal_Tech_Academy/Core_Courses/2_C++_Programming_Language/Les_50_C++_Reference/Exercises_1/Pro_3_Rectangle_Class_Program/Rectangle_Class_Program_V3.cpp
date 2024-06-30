

/* >>> Rectangle Class Program ( Version 3 ) <<< */

/* >>> Write a C++ program that declares a class called Rectangle that has two private member variables for the length and width,
and two public member functions for calculating the area and perimeter of the rectangle.
Use the std::cout function to print the area and perimeter of a rectangle with length 5 and width 10. <<< */

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
#include <bitset>

using namespace std;

// ... Namespaces ...

// ... End Namespaces ...

// ... Classes ...
// Create Rectangle / Class.
class Rectangle
{
private:
     int length, width;

public:
     // set length and width / function.
     Rectangle(int len, int wid)
     {
          length = len;
          width = wid;
     }

     // Create area / function.
     int areaFun()
     {
          int area = length * width;

          return area;
     }

     // Create perimeter / function.
     int perimeterFun()
     {
          int perimeter = (length + width) * 2;

          return perimeter;
     }
};

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Rectangle Class Program ( Version 3 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from Rectangle class.
     Rectangle r1(5, 10);

     cout << "Area: " << r1.areaFun() << endl;
     cout << "Perimeter: " << r1.perimeterFun();

     cout << endl
          << endl;

     return 0;
}
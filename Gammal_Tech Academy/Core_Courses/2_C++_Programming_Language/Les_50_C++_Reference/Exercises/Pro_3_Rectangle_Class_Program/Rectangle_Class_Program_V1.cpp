

/* >>> Rectangle Class Program ( Version 1 ) <<< */

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
     // Create area / function.
     int areaFun(int len, int wid)
     {
          int area = len * wid;

          return area;
     }

     // Create perimeter / function.
     int perimeterFun(int len, int wid)
     {
          int perimeter = (len + wid) * 2;

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
          << "You welcome in Rectangle Class Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from Rectangle class.
     Rectangle r1;
     cout << "Area: " << r1.areaFun(5, 10) << endl;
     cout << "Perimeter: " << r1.perimeterFun(5, 10);

     cout << endl
          << endl;

     return 0;
}
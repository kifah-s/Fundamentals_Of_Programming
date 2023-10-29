

/* >>> Shape Program ( Version 1 ) <<< */

/* >>> Create a base class called Shape.
The class should have a virtual function called area() that returns 0.
Create two derived classes called Rectangle and Circle that override the area() function to calculate
and return the area of the respective shape. <<< */

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
// Shape / class.
class Shape
{
private:
public:
     int area()
     {
          return 0;
     }
};

// Rectangle / class.
class Rectangle : public Shape
{
private:
public:
     int rectangle_area(int height, int width)
     {
          int rectangle_area = height * width;
          return rectangle_area;
     }
};

// Circle / class.
class Circle : public Shape
{
private:
public:
     double circle_area(double radius_of_the_circle)
     {
          double circle_area = radius_of_the_circle * 3.14;
          return circle_area;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Shape Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from Rectangle class.
     Rectangle R1;
     // Calculate rectangle area.
     cout << "- Rectangle area: " << R1.rectangle_area(5, 5) << endl;
     
     // Create object from Circle class.
     Circle C1;
     // Calculate rectangle area.
     cout << "- Circle area: " << C1.circle_area(5);

     cout << endl
          << endl;

     return 0;
}


/* >>> Shape Program ( Version 2 ) <<< */

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
public:
     virtual double area()
     {
          return 0;
     }
};

// Rectangle / class.
class Rectangle : public Shape
{
public:
     double length, width;

     Rectangle(double l, double w)
     {
          length = l;
          width = w;
     }

     double area()
     {
          return length * width;
     }
};

// Circle / class.
class Circle : public Shape
{
public:
     double radius;

     Circle(double r)
     {
          radius = r;
     }

     double area()
     {
          return 3.14 * radius * radius;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Shape Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Shape *shape;
     Rectangle rect(5, 10);
     Circle circle(7);

     // Pointer to rectangle
     shape = &rect;
     cout << "Rectangle area: " << shape->area() << endl;

     // Pointer to circle
     shape = &circle;
     cout << "Circle area: " << shape->area() << endl;

     cout << endl
          << endl;

     return 0;
}
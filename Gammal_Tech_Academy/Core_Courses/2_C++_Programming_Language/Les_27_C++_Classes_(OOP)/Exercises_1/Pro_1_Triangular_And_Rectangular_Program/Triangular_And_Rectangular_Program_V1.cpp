

/* >>> Triangular And Rectangular Program ( Version 1 ) <<< */

/* >>> Write a program that defines a shape class with a constructor that gives value to width and height.
The define two sub-classes triangle and rectangle,
that calculate the area of the shape area (). In the main,
define two variables a triangle and a rectangle and then call the area() function in this two variables. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>

using namespace std;

// ... Classes ...
class Shape
{
protected:
     float width, height;

public:
     void set_data(float a, float b)
     {
          width = a;
          height = b;
     }
};

class Rectangle : public Shape
{
public:
     float area() { return (width * height); }
};

class Triangle : public Shape
{
public:
     float area() { return (width * height / 2); }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Triangular And Rectangular Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Rectangle rect;
     Triangle tri;
     rect.set_data(5, 3);
     tri.set_data(2, 5);
     cout << rect.area() << endl;
     cout << tri.area() << endl;

     cout << endl
          << endl;

     return 0;
}
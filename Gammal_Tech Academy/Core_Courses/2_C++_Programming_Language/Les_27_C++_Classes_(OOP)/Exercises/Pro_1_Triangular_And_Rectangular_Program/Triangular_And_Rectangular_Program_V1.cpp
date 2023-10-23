

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
public:
     Shape(int w, int h) : width(w), height(h)
     {
          // المنشئ يعطي قيم العرض والارتفاع عند إنشاء كائن "شكل"
     }

     // باقي الكود للفئة "شكل"
private:
     int width;
     int height;
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

     cout << endl
          << endl;

     return 0;
}
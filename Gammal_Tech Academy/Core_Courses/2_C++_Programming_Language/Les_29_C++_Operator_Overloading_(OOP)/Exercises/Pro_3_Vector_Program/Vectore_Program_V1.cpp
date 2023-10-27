

/* >>> Vector Program ( Version 1 ) <<< */

/* >>> Create a class Vector that represents a 2D vector.
Overload the + operator to add two vectors. <<< */

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
class Vector
{
public:
     Vector(double x = 0.0, double y = 0.0) : x_(x), y_(y) {}

     double x() const { return x_; }
     double y() const { return y_; }

     Vector operator+(const Vector &other) const
     {
          return Vector(x_ + other.x_, y_ + other.y_);
     }

     friend std::ostream &operator<<(std::ostream &os, const Vector &v)
     {
          os << "(" << v.x_ << ", " << v.y_ << ")";
          return os;
     }

private:
     double x_;
     double y_;
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Vector Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Vector v1(1.0, 2.0);
     Vector v2(3.0, 4.0);
     Vector v3 = v1 + v2;
     std::cout << v3 << std::endl;

     cout << endl
          << endl;

     return 0;
}


/* >>> Add Two Numbers Program ( Version 3 ) <<< */

/* >>> Create a class Complex that represents a complex number.
Overload the + operator to add two complex numbers,
and the << operator to output a complex number to the console. <<< */

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
class Complex
{
public:
     // Constructors
     Complex() : real_(0.0), imaginary_(0.0) {}
     Complex(double real, double imaginary) : real_(real), imaginary_(imaginary) {}

     // Getter functions
     double getReal() const { return real_; }
     double getImaginary() const { return imaginary_; }

     // Overload + operator to add two complex numbers
     Complex operator+(const Complex &other) const
     {
          return Complex(real_ + other.real_, imaginary_ + other.imaginary_);
     }

private:
     double real_;
     double imaginary_;
};

// Overload << operator to output a complex number to the console
std::ostream &operator<<(std::ostream &os, const Complex &c)
{
     os << c.getReal() << " + " << c.getImaginary() << "i";
     return os;
}

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Add Two Numbers Program ( Version 3 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     Complex c1(1.0, 2.0);
     Complex c2(3.0, 4.0);

     Complex c3 = c1 + c2;
     std::cout << "c3 = " << c3 << std::endl;

     cout << endl
          << endl;

     return 0;
}
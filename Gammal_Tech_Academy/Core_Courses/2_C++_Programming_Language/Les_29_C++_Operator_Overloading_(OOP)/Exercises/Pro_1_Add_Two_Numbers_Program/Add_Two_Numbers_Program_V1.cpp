

/* >>> Add Two Numbers Program ( Version 1 ) <<< */

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
class number
{
private:
     int num = 10;

public:
     void operator++()
     {
          num = num + 2;
     }

     int print()
     {
          return num;
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Add Two Numbers Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from number class;
     number num1;

     cout << num1.print() << endl
          << endl;

     ++num1;

     cout << num1.print() << endl;

     cout << endl
          << endl;

     return 0;
}
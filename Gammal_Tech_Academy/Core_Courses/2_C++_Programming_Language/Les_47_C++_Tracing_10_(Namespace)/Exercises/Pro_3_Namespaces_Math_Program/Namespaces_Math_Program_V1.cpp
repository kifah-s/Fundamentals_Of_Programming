

/* >>> Namespaces Math Program ( Version 1 ) <<< */

/* >>> Write a C++ program that defines a namespace "math" with two functions, "square" and "cube",
that return the square and cube of an integer, respectively.
In the main function, read an integer from the user,
and print its square and cube using the "math" namespace functions. <<< */

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

// ... Namespaces ...
// Create namespace Math.
namespace math
{
     // Create square / Function.
     float squareFun(float x)
     {
          float square = 0;
          square = x * x;

          return square;
     }

     // Create cube / Function.
     float cubeFun(float x)
     {
          float cube = 0;
          cube = x * x * x;

          return cube;
     }
} //* namespace math
using namespace math;

// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Namespaces Math Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Receive value from user.
     float num = 0;
     cout << "Please enter a number: ";
     cin >> num;

     cout << endl;

     // Use functions from "math" namespace.
     float square = squareFun(num);
     float cube = cubeFun(num);

     // Print result.
     cout << "Square the number: " << square << endl;
     cout << "Cube the number: " << cube << endl;

     cout << endl
          << endl;

     return 0;
}
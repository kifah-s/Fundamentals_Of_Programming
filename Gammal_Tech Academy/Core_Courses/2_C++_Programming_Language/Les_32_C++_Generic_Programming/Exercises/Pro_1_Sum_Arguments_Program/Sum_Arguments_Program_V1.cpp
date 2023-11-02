

/* >>> Sum Arguments Program ( Version 1 ) <<< */

/* >>> Create a template function that takes two arguments and returns the sum of those arguments. <<< */

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

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Sum Arguments Program ( Version 1 ) .." << endl
          << endl;
}

// Create template.
template <typename T>

// Sum Arguments / Function.
T sumArgFun(T x, T y)
{
     T z = x + y;
     return z;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Sum Arguments.
     cout << "Sum Arguments: " << sumArgFun(2, 2) << endl
          << endl;
     cout << "Sum Arguments: " << sumArgFun('A', 'B') << endl
          << endl;

     cout << endl
          << endl;

     return 0;
}
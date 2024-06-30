

/* >>> Sum Arguments Program ( Version 2 ) <<< */

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
          << "You welcome in Sum Arguments Program ( Version 2 ) .." << endl
          << endl;
}

// Create Template And Add / Function.
template <typename T>
T add(T a, T b)
{
     return a + b;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     int sum1 = add(2, 3);
     double sum2 = add(2.5, 3.7);
     cout << "sum1 = " << sum1 << endl;
     cout << "sum2 = " << sum2 << endl;

     cout << endl
          << endl;

     return 0;
}
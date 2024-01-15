

/* >>> Minimum Value Program ( Version 1 ) <<< */

/* >>> Write a program that uses for_each to find the minimum value in a vector of doubles. <<< */

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
          << "You welcome in Minimum Value Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<double> vec = {1.1, 2.2, 3.3, -4.4, -5.5, 6.6, -7.7, 8.8, 9.8, 10.0};
     double minimum = vec[0];

     // Count even elements using for each.
     for_each(vec.begin(), vec.end(),
              [&](double n)
              {
    if (n < minimum) {
      minimum = n;
    } });

     cout << "Minium Value: " << minimum << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
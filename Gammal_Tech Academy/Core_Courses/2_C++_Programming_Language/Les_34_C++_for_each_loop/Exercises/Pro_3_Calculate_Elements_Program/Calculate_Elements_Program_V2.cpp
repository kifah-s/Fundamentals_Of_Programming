

/* >>> Calculate Elements Program ( Version 2 ) <<< */

/* >>> Write a program that uses for_each to calculate the product of the elements in a vector of integers. <<< */

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
          << "You welcome in Calculate Elements Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<int> vec = {1, 2, 3, 4, 5};
     int product = 1;

     // Calculate elements using for each.
     for_each(vec.begin(), vec.end(),
              [&](int n)
              { product *= n; });

     // Print sum.
     cout << "The product of the elements in the vector is: " << product
          << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}


/* >>> Calculate Elements Program ( Version 1 ) <<< */

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
          << "You welcome in Calculate Elements Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<int> myVec = {2, 3, 1, 4, 5};

     // Calculate elements using for each.
     for_each(myVec.begin(), myVec.end(),
              [](int &n)
              { n += n; });

     // Print sum.
     for (auto n : myVec)
     {
          cout << n << " ";
     }

     cout << endl
          << endl
          << endl;

     return 0;
}
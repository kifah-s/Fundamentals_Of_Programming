

/* >>> Minimum Value Program ( Version 1 ) <<< */

/* >>> Write a program that uses a range-based for loop to find the minimum value in a vector of doubles. <<< */

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
          << "You welcome in Minimum Value Program ( Version 1 ) .." << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<double> myVec = {1.9, 2.5, 0.7, 4.2, 2.1};

     // Creat sum variable.
     double minimum = myVec[0];

     // Print elements of vector and print calculate elements using range-based for loop.
     for (auto ele : myVec)
     {
          if (ele < minimum)
          {
               minimum = ele;
          }
          
     }
     cout << endl
          << "Minimum number: " << minimum;

     cout << endl
          << endl
          << endl;

     return 0;
}
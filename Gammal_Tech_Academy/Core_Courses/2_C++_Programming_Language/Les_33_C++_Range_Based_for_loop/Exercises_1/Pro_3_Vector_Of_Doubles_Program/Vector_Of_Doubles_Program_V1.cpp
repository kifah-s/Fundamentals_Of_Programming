

/* >>> Vector Of Doubles Program ( Version 1 ) <<< */

/* >>> Write a program that uses a range-based for loop to calculate the sum of the elements of a vector of doubles. <<< */

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
          << "You welcome in Vector Of Doubles Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<double> myVec = {1.1, 2.2, 3.3, 4.4, 5.5};

     // Creat sum variable.
     double sum = 0;

     // Print elements of vector and print calculate elements using range-based for loop.
     for (auto ele : myVec)
     {
          cout << ele << "  ";
          sum += ele;
     }
     cout << endl
          << "Sum all elements = " << sum;

     cout << endl
          << endl;

     return 0;
}


/* >>> Double Values Program ( Version 1 ) <<< */

/* >>> Write a program that uses for_each to double the values of a vector of doubles. <<< */

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
          << "You welcome in Double Values Program ( Version 1 ) .." << endl << endl;
}

// Double the values and print / Function.
void printFun(double x)
{
     x *= 2;
     cout << x << " ";
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<double> myVec = {2.5, 3.5, 1.5, 4.5, 5.5};

     // Print elements of vector using for each.
     for_each(myVec.begin(), myVec.end(), printFun);

     cout << endl
          << endl
          << endl;

     return 0;
}
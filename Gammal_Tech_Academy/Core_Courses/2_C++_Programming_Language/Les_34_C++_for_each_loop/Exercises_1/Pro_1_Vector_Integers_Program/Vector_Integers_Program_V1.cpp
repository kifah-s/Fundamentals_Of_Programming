

/* >>> Vector Integers Program ( Version 1 ) <<< */

/* >>> Write a program that uses for_each to print out the elements of a vector of integers. <<< */

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
          << "You welcome in Vector Integers Program ( Version 1 ) .." << endl << endl;
}

// Print / Function.
void printFun(int x)
{
     cout << x << " ";
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<int> myVec = {2, 3, 1, 4, 5};

     // Print elements of vector using for each.
     for_each(myVec.begin(), myVec.end(), printFun);

     cout << endl
          << endl
          << endl;

     return 0;
}
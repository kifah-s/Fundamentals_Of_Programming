

/* >>> Vector Integers Program ( Version 2 ) <<< */

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
          << "You welcome in Vector Integers Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     vector<int> vec = {1, 2, 3, 4, 5};

     for_each(vec.begin(), vec.end(),
              [](int n)
              { cout << n << " "; });

     cout << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
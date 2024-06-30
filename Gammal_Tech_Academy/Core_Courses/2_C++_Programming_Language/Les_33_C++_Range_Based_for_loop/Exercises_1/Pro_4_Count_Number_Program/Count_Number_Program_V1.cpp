

/* >>> Count Number Program ( Version 1 ) <<< */

/* >>> Write a program that uses a range-based for loop to count the number of even numbers in a vector of integers. <<< */

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
          << "You welcome in Count Number Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     // Creat count variable.
     int count = 0;

     // count even numbers using range-based for loop.
     for (auto ele : myVec)
     {
          if (ele % 2 == 0)
          {
               count++;
          }
     }
     cout << endl
          << "number of even numbers: " << count;

     cout << endl
          << endl
          << endl;

     return 0;
}
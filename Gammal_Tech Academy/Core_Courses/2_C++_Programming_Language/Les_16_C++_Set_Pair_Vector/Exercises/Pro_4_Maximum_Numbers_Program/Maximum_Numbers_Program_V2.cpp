

/* >>> Maximum Numbers Program ( Version 2 ) <<< */

/* >>> Write a program that uses a vector to store a list of integers and then finds the maximum element in the vector. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// Welcome massage / Function.
void welcomeMassageFun();

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create a vector to store some integers.
     vector<int> myVec = {1, 2, 3, 4, 5, 6};

     // Create variable for storage Maximum Numbers and find Maximum Numbers.
     int max = *max_element(myVec.begin(), myVec.end());

     // Print Maximum Numbers.
     cout << "Maximum Numbers in vector: " << max;

     cout
         << endl
         << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Maximum Numbers Program ( Version 2 ) .." << endl
          << endl;
}
// ... End Functions ...
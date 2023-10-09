

/* >>> Maximum Numbers Program ( Version 1 ) <<< */

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

     // Create variable for storage Maximum Numbers.
     int max = myVec[0];

     // Find Maximum Numbers in vector.
     for (int i = 0; i < myVec.size(); i++)
     {
          if (myVec[i] > max)
          {
               max = myVec[i];
          }
     }

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
          << "You welcome in Maximum Numbers Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...
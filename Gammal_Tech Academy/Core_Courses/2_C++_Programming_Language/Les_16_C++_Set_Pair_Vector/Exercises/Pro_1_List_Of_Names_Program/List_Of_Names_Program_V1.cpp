

/* >>> List Of Names Program ( Version 1 ) <<< */

/* >>> Write a program that uses a vector to store a list of names and then prints them out. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

void welcomeMassageFun(); // Welcome massage / Function.

int main()
{

     welcomeMassageFun(); // Print welcome massage.

     vector<string> myVec; // Declare vector.

     myVec.push_back("kifah"); // Add elements to vector.
     myVec.push_back("doha");
     myVec.push_back("huda");

     int lenVec = myVec.size(); // Declare variable for storage vector size.

     for (int i = 0; i < lenVec; i++) // Print elements of vector.
     {
          cout << myVec[i] << endl;
     }

     cout << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in List Of Names Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...
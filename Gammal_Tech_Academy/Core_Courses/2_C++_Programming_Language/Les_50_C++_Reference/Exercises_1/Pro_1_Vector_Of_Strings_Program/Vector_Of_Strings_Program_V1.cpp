

/* >>> Vector Of Strings Program ( Version 1 ) <<< */

/* >>> Write a C++ program that declares a std::vector of strings and adds the values "apple", "banana", "cherry", "date", and "elderberry" to it.
Then, use a for loop to print the values of the vector to the console. <<< */

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
#include <bitset>

using namespace std;

// ... Namespaces ...

// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Vector Of Strings Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<string> myVec;

     // Add value to vector.
     myVec.push_back("apple");
     myVec.push_back("banana");
     myVec.push_back("cherry");
     myVec.push_back("date");
     myVec.push_back("elderberry");

     // Print element of vector.
     for (auto i : myVec)
     {
          cout << i << ",     ";
     }

     cout << endl
          << endl;

     return 0;
}
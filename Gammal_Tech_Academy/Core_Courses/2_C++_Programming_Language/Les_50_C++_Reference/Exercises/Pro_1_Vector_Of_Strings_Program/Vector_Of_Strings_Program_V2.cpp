

/* >>> Vector Of Strings Program ( Version 2 ) <<< */

/* >>> Write a C++ program that declares a vector of strings and adds the values "apple", "banana", "cherry", "date", and "elderberry" to it.
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
          << "You welcome in Vector Of Strings Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector, and add elements.
     vector<string> fruits = {"apple", "banana", "cherry", "date", "elderberry"};

     // print elements of vector.
     for (int i = 0; i < fruits.size(); i++)
     {
          cout << fruits[i] << "\n";
     }

     cout << endl
          << endl;

     return 0;
}
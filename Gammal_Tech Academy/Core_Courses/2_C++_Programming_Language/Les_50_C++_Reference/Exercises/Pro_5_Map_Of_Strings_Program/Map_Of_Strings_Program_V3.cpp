

/* >>> Map Of Strings Program ( Version 3 ) <<< */

/* >>> Write a C++ program that declares a std::map of strings and integers, adds the key-value pairs "apple" and 5, "banana" and 10, and "cherry" and 15 to it,
and then uses the std::cout function to print the value associated with the key "banana" to the console. <<< */

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
          << "You welcome in Map Of Strings Program ( Version 3 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create map of strings and number.
     map<string, int> fruits = {{"apple", 5}, {"banana", 10}, {"cherry", 15}};

     int bananaVal = fruits["banana"];
     
     cout << "Value of 'banana' in the map: " << bananaVal << "\n";

     cout << endl
          << endl;

     return 0;
}
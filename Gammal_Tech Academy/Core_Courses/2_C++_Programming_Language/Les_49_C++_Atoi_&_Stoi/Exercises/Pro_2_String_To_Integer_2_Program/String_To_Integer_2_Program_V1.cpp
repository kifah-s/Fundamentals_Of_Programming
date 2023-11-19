

/* >>> String To Integer 2 Program ( Version 1 ) <<< */

/* >>> Convert a String to an Integer using stoi Write a program that takes a string as input and converts it to an integer using stoi function. <<< */

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
          << "You welcome in String To Integer 2 Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string str = "5678";

     int num = stoi(str);

     cout << num + 1 << endl;

     cout << endl
          << endl;

     return 0;
}
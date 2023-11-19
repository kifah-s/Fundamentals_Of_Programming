

/* >>> String To Integer Program ( Version 1 ) <<< */

/* >>> Convert a String to an Integer using atoi Write a program that takes a string as input and converts it to an integer using atoi function. <<< */

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
          << "You welcome in String To Integer Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string str = "1234";

     int num = atoi(str.c_str());

     cout << num + 1 << endl;

     cout << endl
          << endl;

     return 0;
}
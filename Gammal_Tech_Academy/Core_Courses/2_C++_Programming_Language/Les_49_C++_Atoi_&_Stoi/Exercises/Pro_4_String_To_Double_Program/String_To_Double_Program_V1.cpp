

/* >>> String To Double Program ( Version 1 ) <<< */

/* >>> Convert a String to a Double using atof Write a program that takes a string as input and converts it to a double using atof function. <<< */

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
          << "You welcome in String To Double Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     string str = "3.14";

     double num = atof(str.c_str());
     
     cout << num << endl;

     cout << endl
          << endl;

     return 0;
}
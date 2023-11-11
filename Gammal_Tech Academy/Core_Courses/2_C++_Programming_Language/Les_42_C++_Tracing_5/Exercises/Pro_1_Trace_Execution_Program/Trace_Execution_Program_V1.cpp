

/* >>> Trace Execution Program ( Version 1 ) <<< */

/* >>> Trace the execution of the following C++ code and write the final value of the variable product. <<< */

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
          << "You welcome in Trace Execution Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     int numbers[] = {1, 2, 3, 4, 5};
     int product = 1;
     for (int i = 0; i < 5; i++)
     {
          product *= numbers[i];
     }
     cout << "The product is " << product << endl;

     //*Output :
     //* The product is 120

     cout << endl
          << endl
          << endl;

     return 0;
}
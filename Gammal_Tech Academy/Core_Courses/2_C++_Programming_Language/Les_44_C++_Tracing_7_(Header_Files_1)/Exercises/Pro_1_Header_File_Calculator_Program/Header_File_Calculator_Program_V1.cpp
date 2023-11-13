

/* >>> Header File Calculator Program ( Version 1 ) <<< */

/* >>> Create a header file called "calculator.h" that defines a function called "addition" which takes two integers as arguments and returns their sum.
Write the implementation of this function in a separate file called "calculator.cpp".
Use a main function in a separate file called "main.cpp" to call the "addition" function and print the result. <<< */

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

#include "calculator.h"

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Header File Calculator Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     cout << "Sum = " << additionFun(5, 5);

     cout << endl
          << endl
          << endl;

     return 0;
}
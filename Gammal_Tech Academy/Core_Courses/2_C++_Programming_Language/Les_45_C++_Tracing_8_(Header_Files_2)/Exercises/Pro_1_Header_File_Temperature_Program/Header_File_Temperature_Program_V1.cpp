

/* >>> Header File Temperature Program ( Version 1 ) <<< */

/* >>> Create a header file called "temperature.h" that defines a function called "convert_to_celsius" which takes a temperature value in Fahrenheit as an argument and returns the corresponding value in Celsius.
Implement the function in a separate file called "temperature.cpp". Use a main function in a separate file called "main.cpp" to call the "convert_to_celsius" function and print the result. <<< */

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

#include "temperature.h"

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Header File Temperature Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     cout << "celsius Temperature: " << convert_to_celsiusFun(35);

     cout << endl
          << endl
          << endl;

     return 0;
}
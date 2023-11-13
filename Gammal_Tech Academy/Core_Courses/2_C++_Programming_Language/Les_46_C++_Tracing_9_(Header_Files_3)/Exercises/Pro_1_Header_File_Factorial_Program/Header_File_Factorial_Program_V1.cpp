

/* >>> Header File Factorial Program ( Version 1 ) <<< */

/* >>> Create a header file called "factorial.h" that defines a function called "calculate_factorial" which takes an integer value as an argument and returns the factorial of that value.
Implement the function in a separate file called "factorial.cpp". Use a main function in a separate file called "main.cpp" to call the "calculate_factorial" function and print the result. <<< */

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

#include "factorial.h"

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Header File Factorial Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     cout << "factorial: " << calculate_factorial_Fun(5);

     cout << endl
          << endl
          << endl;

     return 0;
}
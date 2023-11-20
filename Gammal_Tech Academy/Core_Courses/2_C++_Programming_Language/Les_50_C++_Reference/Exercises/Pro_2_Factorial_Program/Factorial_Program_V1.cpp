

/* >>> Factorial Program ( Version 1 ) <<< */

/* >>> Write a C++ program that declares a function called factorial that takes an integer as input and returns its factorial.
Use the std::cout function to print the value of the factorial for the input value of 5. <<< */

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
          << "You welcome in Factorial Program ( Version 1 ) .." << endl
          << endl;
}

// Factorial / function.
int factorialFun(int n)
{
     if (n == 0)
     {
          return 1;
     }
     else
     {
          return n * factorialFun(n - 1);
     }
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     cout << "Fac = " <<factorialFun(5);

     cout << endl
          << endl;

     return 0;
}
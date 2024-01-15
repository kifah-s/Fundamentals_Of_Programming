

/* >>> Namespaces A And B Program ( Version 1 ) <<< */

/* >>> Write a C++ program that defines two namespaces, "A" and "B".
In the "A" namespace, define a function "foo" that prints the string "Hello from namespace A".
In the "B" namespace, define a function "foo" that prints the string "Hello from namespace B".
In the main function, call both "foo" functions and observe the output. <<< */

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

// ... Namespaces ...
// Create namespace A.
namespace A
{
     void foo()
     {
          cout << "Hello from namespace A" << endl;
     }
}

// Create namespace B.
namespace B
{
     void foo()
     {
          cout << "Hello from namespace B" << endl;
     }
}

// using namespace A;
// using namespace B;
// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Namespaces A And B Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     A::foo(); // calls the "foo_A" function from namespace A.
     cout << endl;
     B::foo(); // calls the "foo_B" function from namespace B.

     cout << endl
          << endl;

     return 0;
}
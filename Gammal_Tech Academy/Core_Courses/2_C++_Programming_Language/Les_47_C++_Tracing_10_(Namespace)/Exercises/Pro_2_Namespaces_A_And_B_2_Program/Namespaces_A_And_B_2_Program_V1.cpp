

/* >>> Namespaces A And B 2 Program ( Version 1 ) <<< */

/* >>> Modify the previous program so that instead of calling the "foo" functions directly,
you use the "using" directive to bring the "foo" functions into the main namespace.
Then, call the "foo" functions as if they were defined in the main namespace. <<< */

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
     void foo_A()
     {
          cout << "Hello from namespace A" << endl;
     }
}

// Create namespace B.
namespace B
{
     void foo_B()
     {
          cout << "Hello from namespace B" << endl;
     }
}

using namespace A;
using namespace B;
//* OR:
//* using A::fooA;
//* using B::fooB;
// ... End Namespaces ...

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Namespaces A And B 2 Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     foo_A(); // calls the "foo_A" function from namespace A.
     cout << endl;
     foo_B(); // calls the "foo_B" function from namespace B.

     cout << endl
          << endl;

     return 0;
}
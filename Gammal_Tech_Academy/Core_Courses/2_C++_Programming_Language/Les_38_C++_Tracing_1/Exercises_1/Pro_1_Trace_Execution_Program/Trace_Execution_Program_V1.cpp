

/* >>> Trace Execution Program ( Version 1 ) <<< */

/* >>> Trace the execution of the following C++ code and write the final value of the variable result. <<< */

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

     int result = 1;
     for (int i = 1; i <= 5; i++)
     {
          result *= i;
          cout << "i = " << i << ", result = " << result << endl;
     }
     cout << "Final value of result: " << result << endl;

     //*Output :
     //* i = 1, result = 1
     //* i = 2, result = 2
     //* i = 3, result = 6
     //* i = 4, result = 24
     //* i = 5, result = 120
     //* Final value of result: 120

     cout << endl
          << endl
          << endl;

     return 0;
}
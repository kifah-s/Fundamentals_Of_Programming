

/* >>> Trace Execution Program ( Version 1 ) <<< */

/* >>> Trace the execution of the following C++ code and write the final value of the variable count. <<< */

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

     int count = 0;
     for (int i = 1; i <= 10; i++)
     {
          if (i % 2 == 0)
          {
               count++;
          }
          else
          {
               count--;
          }
     }
     cout << "The final value of count is " << count << endl;

     //*Output :
     //* The final value of count is 0

     cout << endl
          << endl
          << endl;

     return 0;
}
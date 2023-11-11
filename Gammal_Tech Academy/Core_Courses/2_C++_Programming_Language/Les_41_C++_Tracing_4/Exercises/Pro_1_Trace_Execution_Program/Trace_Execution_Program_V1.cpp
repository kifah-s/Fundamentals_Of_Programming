

/* >>> Trace Execution Program ( Version 1 ) <<< */

/* >>> Trace the execution of the following C++ code and write the final value of the variable max. <<< */

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

     int numbers[] = {3, 5, 1, 8, 2};

     int max = numbers[0];

     for (int i = 1; i < 5; i++)
     {
          if (numbers[i] > max)
          {
               max = numbers[i];
          }
     }
     cout << "The maximum value is " << max << endl;

     //*Output :
     //* The maximum value is 8

     cout << endl
          << endl
          << endl;

     return 0;
}
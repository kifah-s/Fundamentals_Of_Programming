

/* >>> Trace Execution Program ( Version 1 ) <<< */

/* >>> Trace the execution of the following code and find the final value of the variable sum. <<< */

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

     int i = 1;
     int sum = 0;
     while (i <= 10)
     {
          sum += i;
          i++;
     }
     cout << "The final value of sum is " << sum << endl;

     //*Output :
     //* The final value of sum is 55

     cout << endl
          << endl
          << endl;

     return 0;
}
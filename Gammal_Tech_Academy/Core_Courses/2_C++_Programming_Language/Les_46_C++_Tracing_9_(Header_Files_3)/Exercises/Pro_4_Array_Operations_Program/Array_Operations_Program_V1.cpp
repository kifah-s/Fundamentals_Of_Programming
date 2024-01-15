

/* >>> Header File Array Operations Program ( Version 1 ) <<< */

/* >>>  <<< */

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

#include "array_operations.h"

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Header File Array Operations Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     int array[] = {1, 2, 3, 4, 5};
     int len = sizeof(array) / sizeof(array[0]);

     cout << "Sum all elements: " << find_sum_Fun(array, len);

     cout << endl
          << endl
          << endl;

     return 0;
}
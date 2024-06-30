

/* >>> Integer Array Program ( Version 1 ) <<< */

/* >>> Write a program that uses a range-based for loop to print out the elements of an integer array. <<< */

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
          << "You welcome in Integer Array Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create array.
     int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

     // Print Array using range-based for loop.
     for (int ele : array)
     {
          cout << ele << " ";
     }

     cout << endl
          << endl;

     return 0;
}
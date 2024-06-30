

/* >>> Number Of Even Program ( Version 1 ) <<< */

/* >>> Write a program that uses for_each to count the number of even numbers in a vector of integers. <<< */

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
          << "You welcome in Number Of Even Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create vector.
     vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int count = 0;

     // Count even elements using for each.
     for_each(vec.begin(), vec.end(),
              [&](int n)
              {
    if (n % 2 == 0) {
      count++;
    } });

     cout << "The vector contains " << count << " even numbers." << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
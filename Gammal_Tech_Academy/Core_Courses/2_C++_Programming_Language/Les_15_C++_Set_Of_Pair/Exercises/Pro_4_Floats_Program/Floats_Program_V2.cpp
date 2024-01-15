

/* >>> Floats Program ( Version 2 ) <<< */

/* >>> Write a function that takes a set of pairs of floats as input, and returns the sum of all the second elements. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
float sum_of_second_elements(const set<pair<float, float>> &my_set);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     set<pair<float, float>> my_set = {{1.1f, 2.2f}, {3.3f, 4.4f}, {5.5f, 6.6f}};

     // ... End Variables ...

     // ... Functions ...
     float sum = sum_of_second_elements(my_set);
     // ... End Functions ...

     cout << "Sum of all the second elements = " << sum <<  endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Floats Program ( Version 2 ) .." << endl
          << endl;
}

// Sum of all the second elements / Function.
float sum_of_second_elements(const set<pair<float, float>> &my_set)
{
     float sum = 0.0f;
     for (auto it = my_set.begin(); it != my_set.end(); ++it)
     {
          sum += it->second;
     }
     return sum;
}
// ... End Functions ...


/* >>> Sum All Elements Program ( Version 3 ) <<< */

/* >>> Create a template function that takes a container as an argument
and returns the sum of all the elements in the container. <<< */

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
#include <numeric>

using namespace std;

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Sum All Elements Program ( Version 3 ) .." << endl
          << endl;
}

// Create template.
template <typename T>

// Sum of all elements / Function.
T sum(const vector<T> &container)
{
     T result = 0;
     for (const T &element : container)
     {
          result += element;
     }
     return result;
}

// ... End Functions ...

// ... Classes ...

// ... End Classes ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     vector<int> container = {1, 2, 3, 4, 5};
     cout << "sum = " << sum(container) << endl;

     cout << endl
          << endl;

     return 0;
}
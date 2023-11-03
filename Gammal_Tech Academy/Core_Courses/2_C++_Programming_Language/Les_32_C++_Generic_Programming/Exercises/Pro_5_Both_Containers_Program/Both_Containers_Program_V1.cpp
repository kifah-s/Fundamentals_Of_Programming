

/* >>> Both Containers Program ( Version 1 ) <<< */

/* >>> Create a template function that takes two containers as arguments
and returns a new container that contains the elements of both containers, concatenated. <<< */

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
          << "You welcome in Both Containers Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

template <typename T>

vector<T> concatenate(const vector<T> &vec1, const vector<T> &vec2)
{
     vector<T> result;

     result.reserve(vec1.size() + vec2.size());
     result.insert(result.end(), vec1.begin(), vec1.end());
     result.insert(result.end(), vec2.begin(), vec2.end());

     return result;
}

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     vector<int> vec1 = {1, 2, 3};
     vector<int> vec2 = {4, 5, 6};

     auto vec3 = concatenate(vec1, vec2);

     for (const auto &value : vec3)
     {
          cout << value << " ";
     }
     cout << endl;

     cout << endl
          << endl;

     return 0;
}
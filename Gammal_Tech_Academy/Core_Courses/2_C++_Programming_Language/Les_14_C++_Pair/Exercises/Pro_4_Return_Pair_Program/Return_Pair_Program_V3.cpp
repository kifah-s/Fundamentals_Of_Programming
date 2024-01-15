

// >>> Return Pair Program ( Version 3 ) <<< */

/* >>> Write a function that takes two pairs of integers as input and returns a pair with the sum of their first elements and the sum of their second elements. <<< */

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
pair<int, int> sum_pairs(pair<int, int> pair1, pair<int, int> pair2);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<int, int> my_pair1(5, 10);
     pair<int, int> my_pair2(3, 7);
     // ... End Variables ...

     // ... Functions ...
     pair<int, int> result = sum_pairs(my_pair1, my_pair2);
     // ... End Functions ...

     cout << "Sum of the pairs: (" << result.first << ", " << result.second << ")" << endl;

     cout << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Return Pair Program ( Version 3 ) .." << endl
          << endl;
}

// Return Pair / Function.
pair<int, int> sum_pairs(pair<int, int> pair1, pair<int, int> pair2)
{
     int sum_first = pair1.first + pair2.first;
     int sum_second = pair1.second + pair2.second;

     pair<int, int> result(sum_first, sum_second);

     return result;
}
// ... End Functions ...
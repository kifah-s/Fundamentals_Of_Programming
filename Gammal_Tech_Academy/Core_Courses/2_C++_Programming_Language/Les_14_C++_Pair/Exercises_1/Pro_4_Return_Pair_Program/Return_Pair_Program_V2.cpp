

// >>> Return Pair Program ( Version 2 ) <<< */

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
pair<int, int> resultFun(pair<int, int> x, pair<int, int> y, pair<int, int> z);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<int, int> pair_1, pair_2, pair_3;
     // ... End Variables ...

     cout << "Please enter first number of pair 1: ";
     cin >> pair_1.first;
     cout << "Please enter second number of pair 1: ";
     cin >> pair_1.second;

     cout << endl;

     cout << "Please enter first number of pair 2: ";
     cin >> pair_2.first;
     cout << "Please enter second number of pair 2: ";
     cin >> pair_2.second;

     cout << endl
          << endl;

     // ... Functions ...
     pair_3 = resultFun(pair_1, pair_2, pair_3);
     // ... End Functions ...

     cout << "sum first element from pair 1 and first element from pair 2: " << pair_3.first << endl;
     cout << "sum second element from pair 1 and second element from pair 2: " << pair_3.second << endl
          << endl
          << endl;

     return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Return Pair Program ( Version 2 ) .." << endl
          << endl;
}

// Return Pair / Function.
pair<int, int> resultFun(pair<int, int> x, pair<int, int> y, pair<int, int> z)
{
     z.first = x.first + y.first;
     z.second = x.second + y.second;

     return z;
}
// ... End Functions ...
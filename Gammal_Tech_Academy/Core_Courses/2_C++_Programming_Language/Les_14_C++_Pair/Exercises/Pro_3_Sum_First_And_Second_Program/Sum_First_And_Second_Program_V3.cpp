

// >>> Sum First And Second Program ( Version 3 ) <<< */

/* >>> Create a pair of two integers, and print out Sum the first and second elements. <<< */

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
int sumFirstAndSecondFun(pair<int, int> x, int s);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     pair<int, int> myFirstPair;
     int sum = 0;
     // ... End Variables ...

     cout << "Please enter first number: ";
     cin >> myFirstPair.first;

     cout << "Please enter second number: ";
     cin >> myFirstPair.second;

     cout << endl
          << endl;

     // ... Functions ...
     sum = sumFirstAndSecondFun(myFirstPair, sum);
     // ... End Functions ...

     cout << "Sum First And Second is: " << sum << endl
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
          << "You welcome in Sum First And Second Program ( Version 3 ) .." << endl
          << endl;
}

// Sum First And Second / Function.
int sumFirstAndSecondFun(pair<int, int> x, int s)
{
     s = x.first + x.second;

     return s;
}
// ... End Functions ...
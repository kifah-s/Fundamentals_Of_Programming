

// >>> Inverted Triangle Program ( Version 1 ) <<< */

/* >>> How can you modify your C++ program to print an inverted triangle of stars with a given height? <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void invertedTriangleFun(int h);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int height = 0;
     // ... End Variables ...

     cout << "Enter the height of the triangle: ";
     cin >> height;

     // ... Functions ...
     invertedTriangleFun(height);
     // ... End Functions ...

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
          << "You welcome in Inverted Triangle Program ( Version 1 ) .." << endl
          << endl;
}

// Inverted triangle / Function.
void invertedTriangleFun(int h)
{
     for (int i = h; i >= 1; i--)
     {
          for (int j = 1; j <= h - i; j++)
          {
               cout << " ";
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
}
// ... End Functions ...
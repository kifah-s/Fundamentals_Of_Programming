

// >>> Equilateral Triangle Program ( Version 1 ) <<< */

/* >>> Write a C++ program to print an equilateral triangle of stars with a given side length. <<< */

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
void equilateralTriangleFun(int h);
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
     equilateralTriangleFun(height);
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
          << "You welcome in Equilateral Triangle Program ( Version 1 ) .." << endl
          << endl;
}

// Equilateral triangle / Function.
void equilateralTriangleFun(int h)
{
     for (int i = 1; i <= h; i++)
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
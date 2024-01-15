

// >>> Hollow Triangle Program ( Version 1 ) <<< */

/* >>> Write a program to print a hollow triangle of stars. The user should input the height of the triangle. <<< */

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
void hollowTriangleFun(int h);
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
     hollowTriangleFun(height);
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
          << "You welcome in Hollow Triangle Program ( Version 1 ) .." << endl
          << endl;
}

// Hollow triangle / Function.
void hollowTriangleFun(int h)
{
     for (int i = 1; i <= h; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               if (i == h || j == 1 || j == i)
               {
                    cout << "* ";
               }
               else
               {
                    cout << "  ";
               }
          }
          cout << endl;
     }
}
// ... End Functions ...
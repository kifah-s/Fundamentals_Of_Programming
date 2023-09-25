

// >>> Right Angled Triangle Program ( Version 2 ) <<< */

/* >>> Write a C++ program to print a right-angled triangle of stars with a given height <<< */

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
void rightAngledTriangleFun(int n, string s);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     // ... Variables ...
     int height = 0;
     string star = "";
     // ... End Variables ...

     cout << "Please enter the height of the triangle: ";
     cin >> height;

     // ... Functions ...
     rightAngledTriangleFun(height, star);
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
          << "You welcome in Right Angled Triangle Program ( Version 2 ) .." << endl
          << endl;
}

// right-angled triangle / Function.
void rightAngledTriangleFun(int n, string s)
{
     for (int i = 1; i <= n; i++)
     {
          // s = s + '*';
          s += '*';
          cout << s << endl;
     }
}
// ... End Functions ...
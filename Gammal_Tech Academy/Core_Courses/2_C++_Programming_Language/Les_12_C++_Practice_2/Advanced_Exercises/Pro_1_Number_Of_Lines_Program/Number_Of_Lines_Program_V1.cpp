

// >>> Number Of Lines Program ( Version 1 ) <<< */

/* >>> A program that asks the person to enter a number and prints a number of lines equal to that number...
and in each line it prints a symbol ( * ) with repetition equal to the row number and vice versa (meaning if the user enters the number 5...
the program prints in the first line ***** and in The fifth line *) is repeated on its own without stopping. <<< */

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
string numberOfLinesFun(int n, string s);
void invertedTriangleFun(string s);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     while (true)
     {
          // ... Variables ...
          int numberOfLines = 0;
          string star = "";
          // ... End Variables ...
          
          cout << "Please enter a number of lines: ";
          cin >> numberOfLines;

          // ... Functions ...
          star = numberOfLinesFun(numberOfLines, star);
          invertedTriangleFun(star);
          // ... End Functions ...
     }

     cout << endl
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
          << "You welcome in Number Of Lines Program ( Version 1 ) .." << endl
          << endl;
}

// Enter number of Lines / Function.
string numberOfLinesFun(int n, string s)
{
     for (int i = 0; i < n; i++)
     {
          s += "*";
     }

     return s;
}

// Print Inverted triangle / Function.
void invertedTriangleFun(string s)
{
     for (int i = 0; i < s.length(); i++)
     {
          cout << s.substr(i) << endl;
     }
}
// ... End Functions ...
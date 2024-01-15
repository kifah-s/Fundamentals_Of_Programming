

// >>> Number Of Lines 2 Program ( Version 1 ) <<< */

/* >>> A program that asks the person to enter a number and prints a number of lines equal to that number.
In each line, it prints numbers (starting from the last number that is supposed to be printed) with a frequency equal to the row number (that is, if the user enters the number 3, the program prints in the first line (4 5 6) The second line (2, 3), the third line (1)...
and so on) and it is repeated on its own without stopping (for those who excelled). <<< */

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
string numberOfLinesFun(int n, string num, int c);
void invertedTriangleFun(int n, string num, int c);
// ... End Functions ...

int main()
{
     welcomeMassageFun();

     while (true)
     {
          // ... Variables ...
          int numberOfLines = 0, counter = 0;
          string number = "";
          // ... End Variables ...

          cout << "Please enter a number of lines: ";
          cin >> numberOfLines;

          // ... Functions ...
          number = numberOfLinesFun(numberOfLines, number, counter);
          invertedTriangleFun(numberOfLines, number, counter);
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
          << "You welcome in Number Of Lines 2 Program ( Version 1 ) .." << endl
          << endl;
}

// Enter number of Lines 2 / Function.
string numberOfLinesFun(int n, string num, int c)
{
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               c += 1;
               num += to_string(c);
          }
     }

     return num;
}

// Print Inverted triangle / Function.
void invertedTriangleFun(int n, string num, int c)
{
     //
}
// ... End Functions ...


/* >>> Average Three Numbers Program ( Version 1 ) <<< */

/* >>> Write a C++ program that calculates the average of three numbers entered by the user. <<< */

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

using namespace std;

// ... Classes ...

// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Average Three Numbers Program ( Version 1 ) .." << endl
          << endl;
}

// Calculate average three numbers / Function.
float calAveThrNumFun(float num1, float num2, float num3)
{
     float AveThrNum = (num1 + num2 + num3) / 3;
     return AveThrNum;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables.
     float num1 = 0, num2 = 0, num3 = 0;

     // Receive num1, num2 and num3 from user.
     cout << "Please enter num1: ";
     cin >> num1;
     cout << "Please enter num2: ";
     cin >> num2;
     cout << "Please enter num3: ";
     cin >> num3;

     // Calculate average three numbers.
     float AveThrNum = calAveThrNumFun(num1, num2, num3);

     // Print volume of rectangle.
     cout << endl
          << "average three numbers is: " << AveThrNum;

     cout << endl
          << endl
          << endl;

     return 0;
}
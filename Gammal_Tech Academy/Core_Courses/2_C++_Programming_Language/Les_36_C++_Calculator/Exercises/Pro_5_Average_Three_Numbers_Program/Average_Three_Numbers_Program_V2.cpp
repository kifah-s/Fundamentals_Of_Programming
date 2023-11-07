

/* >>> Average Three Numbers Program ( Version 2 ) <<< */

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
          << "You welcome in Average Three Numbers Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Declare variables to hold three numbers
     float num1, num2, num3;

     // Prompt the user to enter three numbers
     cout << "Enter the first number: ";
     cin >> num1;
     cout << "Enter the second number: ";
     cin >> num2;
     cout << "Enter the third number: ";
     cin >> num3;

     // Calculate the average of the three numbers
     float average = (num1 + num2 + num3) / 3;

     // Display the result to the user
     cout << endl
          << "The average of the three numbers is: " << average << endl;

     cout << endl
          << endl
          << endl;

     return 0;
}
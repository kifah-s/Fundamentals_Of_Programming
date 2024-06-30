

/* >>> Two Numbers Program ( Version 1 ) <<< */

/* >>> Write a program and input two integers in main and pass them to default constructor of the class.
Show the result of the addition of two numbers. <<< */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>

using namespace std;

// ... Classes ...
class myData
{
public:
     int nu1, nu2;
     myData(int num1, int num2)
     {
          nu1 = num1;
          nu2 = num2;
          cout << "numbers initialized \n";
     }
     int sum_num() { return nu1 + nu2; }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Two Numbers Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     int num1;
     int num2;

     cout << "Enter first number : ";
     cin >> num1;
     cout << "Enter second number : ";
     cin >> num2;

     myData set_nu(num1, num2);

     cout << "The addition result on:" << set_nu.sum_num() << "\n";

     cout << endl
          << endl;

     return 0;
}
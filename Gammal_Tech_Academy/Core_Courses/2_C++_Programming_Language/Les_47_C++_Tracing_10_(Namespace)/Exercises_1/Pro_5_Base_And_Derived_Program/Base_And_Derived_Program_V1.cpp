

/* >>> Base And Derived Program ( Version 1 ) <<< */

/* >>> Write a C++ program that defines two namespaces, "base" and "derived".
In the "base" namespace, define a class "Person" with a private member variable "name" and a public member function "setName" that sets the name.
In the "derived" namespace, define a class "Employee" that inherits from the "Person" class and adds a private member variable "salary" and a public member function "setSalary" that sets the salary.
In the main function, create an "Employee" object, set its name and salary, and print the values of its name and salary. <<< */

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

// ... Namespaces ...
// Create namespace Base.
namespace Base
{
     class Person
     {
     private:
          string name;

     public:
          string setNameFun(string x)
          {
               name = x;
               return name;
          }
     };

} // namespace Base
using namespace Base;

// Create namespace Derived.
namespace Derived
{
     class Employee : public Person
     {
     private:
          int salary;

     public:
          int setSalaryFun(int x)
          {
               salary = x;
               return salary;
          }
     };

} // namespace Derived
using namespace Derived;

// ... End Namespaces ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Base And Derived Program ( Version 1 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create Employee 1.
     Employee emp1;
     string emp1_Name = emp1.setNameFun("kifah");
     int emp1_Salary = emp1.setSalaryFun(2000);

     // Print employee name and employee salary.
     cout << "Employee Name: " << emp1_Name << endl;
     cout << "Employee Salary: " << emp1_Salary << "$" << endl;

     cout << endl
          << endl;

     return 0;
}


/* >>> Base And Derived Program ( Version 2 ) <<< */

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
          void setNameFun(string name)
          {
               this->name = name;
          }

          string getNameFun()
          {
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
          void setSalaryFun(int salary)
          {
               this->salary = salary;
          }

          int getSalaryFun()
          {
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
          << "You welcome in Base And Derived Program ( Version 2 ) .." << endl
          << endl;
}

// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create Employee 1.
     Employee emp1;
     emp1.setNameFun("kifah");
     emp1.setSalaryFun(2000);

     // Print employee name and employee salary.
     cout << "Employee Name: " << emp1.getNameFun() << endl;
     cout << "Employee Salary: " << emp1.getSalaryFun() << "$" << endl;

     cout << endl
          << endl;

     return 0;
}
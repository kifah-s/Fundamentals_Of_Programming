

/* >>> Person Program ( Version 1 ) <<< */

/* >>> Create a base class called Person.
The class should have two private data members name and age.
Create a derived class called Student that inherits from Person.
The Student class should have an additional data member called grade
and a member function called display() that displays the name, age, and grade of the student. <<< */

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
// Person / class.
class Person
{
private:
     string members_name;
     int age;

public:
     string set_members_name(string mem)
     {
          members_name = mem;
          return members_name;
     }

     int set_age(int a)
     {
          age = a;
          return age;
     }
};

// Student / class.
class Student : public Person
{
private:
     int grade;

public:
     int set_grade(int gra)
     {
          grade = gra;
          return grade;
     }

     void get_display(string s, int a, int g)
     {
          cout << "- Student Name: " <<set_members_name(s) << endl;
          cout << "- Student Age: " <<set_age(a) << endl;
          cout << "- Student Grade: " <<set_grade(g) << "%";
     }
};
// ... End Classes ...

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
     cout << endl
          << endl
          << "You welcome in Person Program ( Version 1 ) .." << endl
          << endl;
}
// ... End Functions ...

int main()
{
     // Print welcome massage.
     welcomeMassageFun();

     // Create object from Student class.
     Student S1;

     // View student information;
     cout << "student information:" << endl;
     S1.get_display("kifah", 26, 98);

     cout << endl
          << endl;

     return 0;
}

//* Class Person Program (Version 1).

/*
* Create a base class Person with attributes name and age and a method displayInfo to display the person's information,
* Derive a class Student from Person with an additional attribute grade and a method displayGrade to display the student's grade.

! Output:
! Name: kifah, Age: 24
! Grade: 98%
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Classes ..
class Person
{
private:
    string name;
    int age;

public:
    // Setter.
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    // Getter.
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    float grade;

public:
    // Setter.
    void setGrade(float g)
    {
        grade = g;
    }

    // Getter.
    void displayGrade()
    {
        cout << "Grade: " << grade << "%" << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Person Program (Version 1) ..\n"
         << endl;
}

// Student - Function.
void studentFun()
{
    Student s1;
    s1.setName("kifah saloum");
    s1.setAge(24);
    s1.setGrade(98);
    s1.displayInfo();
    s1.displayGrade();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    studentFun();

    cout << "\n"
         << endl;
}
//* End Function ..


//* Class Person Program (Version 2).

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
public:
    string name;
    int age;

    // Getter.
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    float grade;

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
    cout << "\n\nYou welcome in Class Person Program (Version 2) ..\n"
         << endl;
}

// Student - Function.
void studentFun()
{
    Student s1;
    s1.name = "kifah saloum";
    s1.age = 24;
    s1.grade = 98;
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

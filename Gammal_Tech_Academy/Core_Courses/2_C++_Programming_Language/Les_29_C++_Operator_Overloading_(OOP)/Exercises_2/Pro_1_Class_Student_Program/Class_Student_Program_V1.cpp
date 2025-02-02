
//* Class Student Program (Version 1).

/*
* Create a class named Student with attributes name and grade.
* Include a method to check if the student passed (grade >= 60) or failed.

! Output:
! kifah passed.
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
class Student
{
private:
    string studentName;
    float studentGrade;

public:
    void setStudentName(string n)
    {
        studentName = n;
    }

    void setStudentGrade(int g)
    {
        studentGrade = g;
    }

    void checkGrade()
    {
        if (studentGrade >= 60)
        {
            cout << studentName << ", Passed." << endl;
        }
        else
        {
            cout << studentName << ", Failed." << endl;
        }
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Student Program (Version 1) ..\n"
         << endl;
}

// Student Details - Function.
void studentDetailsFun()
{
    Student s1;
    s1.setStudentName("kifah saloum");
    s1.setStudentGrade(90);
    s1.checkGrade();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    studentDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..

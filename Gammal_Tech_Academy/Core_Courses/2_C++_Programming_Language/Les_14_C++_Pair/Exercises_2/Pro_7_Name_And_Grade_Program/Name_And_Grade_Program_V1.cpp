
//* Name And Grade Program (Version 1).

/*
* Use pairs to represent a student's name and grade, and then compare their grades, taking input from the user.

! Input:
! Please, enter name for student 1: Alice
! Please, enter grade for student 1: 85

! Please, enter name for student 1: Bob
! Please, enter grade for student 2: 95

! Output:
! Bob has a hight grade.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Name And Grade Program (Version 1) ..\n"
         << endl;
}

// Get Elements Student 1 - Function.
pair<string, int> getElemetsStudent1Fun(pair<string, int> s1)
{
    cout << "Please, enter name for student 1: ";
    cin >> s1.first;

    cout << "Please, enter grade for student 1: ";
    cin >> s1.second;

    return s1;
}

// Get Elements Student 2 - Function.
pair<string, int> getElemetsStudent2Fun(pair<string, int> s2)
{
    cout << "\nPlease, enter name for student 2: ";
    cin >> s2.first;

    cout << "Please, enter grade for student 2: ";
    cin >> s2.second;

    return s2;
}

// Compare Grades - Function.
void compareGradesFun(pair<string, int> s1, pair<string, int> s2)
{
    if (s1.second > s2.second)
    {
        cout << "\n" << s1.first << " has a hight grade.";
    }
    else if (s2.second > s1.second)
    {
        cout << "\n" << s2.first << " has a hight grade.";
    }
    else
    {
        cout << "\n" << "Grades Is Equal.";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pair.
    pair<string, int> student_1, student_2;

    // Call Functions.
    student_1 = getElemetsStudent1Fun(student_1);
    student_2 = getElemetsStudent2Fun(student_2);
    compareGradesFun(student_1, student_2);

    cout << "\n"
         << endl;
}
//* End Function ..

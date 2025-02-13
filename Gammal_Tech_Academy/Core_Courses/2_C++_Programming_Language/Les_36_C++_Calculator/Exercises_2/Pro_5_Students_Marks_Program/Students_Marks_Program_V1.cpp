
//* Students Marks Program (Version 1).

/*
* Write a program that takes a student's marks as input and determines their grade based on the following criteria:
* 90-100: A
* 80-89: B
* 70-79: C
* 60-69: D
* 60: F

! Input:
! Please, Enter student's mark: 95

! Output:
! Grade: A
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

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Students Marks Program (Version 1) ..\n"
         << endl;
}

// Get Mark - Function.
float getMarkFun()
{
    float m;
    cout << "Please, student's mark: ";
    cin >> m;

    return m;
}

// Check Mark - Function.
void checkMarkFun(float m)
{
    if (m >= 90 && m <= 100)
    {
        cout << "Grade: A" << endl;
    }
    else if (m >= 80 && m < 90)
    {
        cout << "Grade: B" << endl;
    }
    else if (m >= 70 && m < 80)
    {
        cout << "Grade: C" << endl;
    }
    else if (m >= 60 && m < 70)
    {
        cout << "Grade: D" << endl;
    }
    else if (m < 60 && m >= 0)
    {
        cout << "Grade: F" << endl;
    }
    else
    {
        cout << "Invalid Input, Mark should be between 0 and 100";
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    float studentMark;

    // Call Functions.
    printWelcomeMessageFun();
    studentMark = getMarkFun();
    checkMarkFun(studentMark);

    cout << "\n"
         << endl;
}
//* End Function ..

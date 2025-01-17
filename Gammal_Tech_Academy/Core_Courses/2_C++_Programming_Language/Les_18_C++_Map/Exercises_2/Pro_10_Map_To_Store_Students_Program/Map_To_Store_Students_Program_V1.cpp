
//* Map To Store Students Program (Version 1).

/*
* Create a program that uses a map to store student names along with their grades (e.g., A, B, C),
* The program should allow the user to input the data and,
* then print the student names and grades in alphabetical order of names.

! Input:
! please, enter number of Students: 3

! please, enter student name: bob
! please, enter student grade (A, B, C, etc): c

! please, enter student name: alice
! please, enter student grade (A, B, C, etc): a

! please, enter student name: kifah
! please, enter student grade (A, B, C, etc): a

! Output:
! Sorted by student name:
! country: alice, capitals: a
! country: bob, capitals: c
! country: kifah, capitals: a
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>

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
    cout << "\n\nYou welcome in Map To Store Students Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Students - Function.
int getNumberOfStudentsFun(int numOf)
{
    cout << "please, enter number of Students: ";
    cin >> numOf;

    return numOf;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(int numOf, map<string, string> myMap)
{
    for (int i = 0; i < numOf; i++)
    {
        string couName, couCapitals;

        cout << "\nplease, enter student name: ";
        cin >> couName;

        cout << "please, enter student grade (A, B, C, etc): ";
        cin >> couCapitals;

        myMap[couName] = couCapitals;
    }

    return myMap;
}

// Print Map Elements - Function.
void printMapElementsFun(map<string, string> myMap)
{
    cout << "\nSorted by student name:" << endl;
    for (auto &x : myMap)
    {
        cout << "student: " << x.first << ", grade: " << x.second << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    map<string, string> myMap;
    int numOf = 0;

    // Call Functions.
    numOf = getNumberOfStudentsFun(numOf);
    myMap = addElementsToMapFun(numOf, myMap);
    printMapElementsFun(myMap);

    cout << "\n"
         << endl;
}
//* End Function ..


//* Class Person Details Program (Version 1).

/*
* Create a class PersonDetails with a parameterized constructor that takes the name and age of a person from the user and displays the details.

! Input:
! Please, enter your name: kifah saloum
! Please, enter your age: 24

! Output:
! Person Details:
! Name: kifah saloum
! Age: 24
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
class PersonDetails
{
public:
    PersonDetails()
    {
        string name;
        int age = 0;

        cout << "Please, enter your name: ";
        getline(cin, name);

        cout << "Please, enter your age: ";
        cin >> age;

        cout << "Person Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;

    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Person Details Program (Version 1) ..\n"
         << endl;
}

// Person Details - Function.
void personDetailsFun()
{
    PersonDetails obj1;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    personDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..

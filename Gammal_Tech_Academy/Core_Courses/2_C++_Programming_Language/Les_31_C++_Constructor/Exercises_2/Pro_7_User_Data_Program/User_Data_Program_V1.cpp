
//* Class User Data Program (Version 1).

/*
* Create a class UserData with a parameterized constructor that takes user's name and age as input and displays a greeting message.

! Input:
! Please, enter your name: kifah saloum
! Please, enter your age: 6

! Output:
! Hello kifah saloum, you are 20 years old.
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
class UserData
{
public:
    UserData()
    {
        string name;
        int age = 0;

        cout << "Please, enter your name: ";
        getline(cin, name);

        cout << "Please, enter your age: ";
        cin >> age;

        cout << "Hello " << name << ", you are " << age << " years old." << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class User Data Program (Version 1) ..\n"
         << endl;
}

// User Data - Function.
void userDataFun()
{
    UserData obj1;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    userDataFun();

    cout << "\n"
         << endl;
}
//* End Function ..

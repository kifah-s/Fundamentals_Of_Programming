
//* Class Members Details Program (Version 1).

/*
* Create a class named Gammal_Tech_Member to represent a member of Gammal Tech.
* The member has attributes such as name, cellphone number (cell), and the number of days (days) they have been a member.
* Implement a parameterized constructor in the class to initialize the name and cellphone number.
* The default values for the name and cellphone number should be set to "Gammal Tech New User" and an empty string, respectively.
* Also, set the initial number of days to 0.
* Implement a method print to print the member's name, cellphone number, and the number of days.
* In the main function, create an object of the class with a cellphone number, and print the member details.

! Output:
! Name: Gammal Tech New User
! Cellphone: +963988621421
! Days of membership: 0
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
class MembersDetails
{
private:
    string name, cellphone;
    int daysOfMembership;

public:
    MembersDetails(string cellPh)
    {
        name = "Gammal Tech New User";
        cellphone = cellPh;
        daysOfMembership = 0;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Cellphone: " << cellphone << endl;
        cout << "Days of membership: " << daysOfMembership << endl;
    }
};
//* End Classes ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Class Members Details Program (Version 1) ..\n"
         << endl;
}

// Members Details - Function.
void membersDetailsFun()
{
    MembersDetails obj("+963998621421");
    obj.print();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    membersDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..

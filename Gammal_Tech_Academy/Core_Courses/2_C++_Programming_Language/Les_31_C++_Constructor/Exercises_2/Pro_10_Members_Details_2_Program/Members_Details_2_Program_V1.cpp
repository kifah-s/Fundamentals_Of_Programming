
//* Class Members Details 2 Program (Version 1).

/*
* Create a class named Gammal_Tech_Member to represent a member of Gammal Tech.
* The member has attributes such as name, cellphone number (cell), and the number of days (days) they have been a member.
* Implement a parameterized constructor in the class to initialize the name and cellphone number.
* The default values for the name and cellphone number should be set to "Gammal Tech New User" and an empty string, respectively.
* Also, set the initial number of days to 0.
* Implement a method print to print the member's name, cellphone number, and the number of days.
* Additionally, add two methods: renewMembership to renew the membership by a specified number of days and updateCellphone to update the member's cellphone number.
* In the main function, create an object of the class with a cellphone number, renew the membership for 30 days, update the cellphone number, and print the updated member details.

! Output:
! Original Details:
! Name: Gammal Tech New User
! Cellphone: 123456789
! Days of membership: 0

! Update Details:
! Name: Gammal Tech New User
! Cellphone: +963988621421
! Days of membership: 30
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

        cout << "Original Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Cellphone: " << cellphone << endl;
        cout << "Days of membership: " << daysOfMembership << "\n"
             << endl;
    }

    void renewMembership(int daysOfMem)
    {
        daysOfMembership = daysOfMem;
    }

    void updateCellphone(string cellPho)
    {
        cellphone = cellPho;
    }

    void print()
    {
        cout << "Update Details: " << endl;
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
    cout << "\n\nYou welcome in Class Members Details 2 Program (Version 1) ..\n"
         << endl;
}

// Members Details - Function.
void membersDetailsFun()
{
    MembersDetails obj("123456789");
    obj.renewMembership(30);
    obj.updateCellphone("+963998621421");
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


//* Class Person Program (Version 1).

/*
* Create a program that defines a class Person with private members name, age, and addressو
* Implement public methods setDetails to set person details and displayInfo to display the person's information.

! Input:
! Please, enter your name: kifah saloum
! Please, enter your age: 24
! Please, enter your address: syria

! Output:
! Name: kifah saloum
! Age: 24
! Address: syria
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
    string name, address;
    int age;

public:
    void setName()
    {
        cout << "Please, enter your name: ";
        getline(cin, name);
    }

    void setAge()
    {
        cout << "Please, enter your age: ";
        cin >> age;
    }

    void setAddress()
    {
        cout << "Please, enter your address: ";
        cin >> address;
    }

    void getPersonDetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
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

// Print Person Details - Function.
void printPersonDetailsFun()
{
    Person person_1;
    person_1.setName();
    person_1.setAge();
    person_1.setAddress();
    person_1.getPersonDetails();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Call Functions.
    printPersonDetailsFun();

    cout << "\n"
         << endl;
}
//* End Function ..

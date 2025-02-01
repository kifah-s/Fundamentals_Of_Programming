
//* Class Person Program (Version 1).

/*
* Create a program that defines a class Person with private members name, age, and address,
* Implement public methods setDetails to set person details and displayInfo to display the person's information,
* and add a public method celebrateBirthday that increments the person's age by 1.

! Output:
! Name: kifah saloum
! Age: 24
! Address: syria
! Happy birthday, Age incremented to 25.
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
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setAddress(string ad)
    {
        address = ad;
    }

    void celebrateBirthday()
    {
        age = age + 1;
        cout << "Happy birthday, Age incremented to " << age << endl;
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
    person_1.setName("kifah saloum");
    person_1.setAge(24);
    person_1.setAddress("syria");
    person_1.getPersonDetails();
    person_1.celebrateBirthday();
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

#include <iostream>

using namespace std;

//* Enums
enum enColor
{
    red,
    green,
    yellow,
    blue
};

enum enGender
{
    male = 1,
    female = 2
};

enum enMaritalStatus
{
    single = 1,
    married = 2
};
//* End Enums

//* Structs

struct stAddress
{
    string country;
    string city;
};

struct stContactInfo
{
    string phone;
    string email;

    stAddress address;
};

struct stPerson
{
    string firstName;
    string lastName;

    stContactInfo contactInfo;

    enColor favouriteColor;
    enGender gender;
    enMaritalStatus maritalStatus;
};

//* End Structs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    stPerson person_1;

    person_1.firstName = "kifah";
    person_1.lastName = "saloum";
    person_1.contactInfo.email = "kifa.saloum@gmail.com";
    person_1.contactInfo.phone = "00963998621421";
    person_1.contactInfo.address.country = "syria";
    person_1.contactInfo.address.city = "shahba";
    person_1.gender = enGender::male;
    person_1.maritalStatus = enMaritalStatus::single;
    person_1.favouriteColor = enColor::blue;

    cout << "First Name: " << person_1.firstName << endl;
    cout << "Last Name: " << person_1.lastName << endl;
    cout << "Email: " << person_1.contactInfo.email << endl;
    cout << "Phone: " << person_1.contactInfo.phone << endl;
    cout << "Country: " << person_1.contactInfo.address.country << endl;
    cout << "City: " << person_1.contactInfo.address.city << endl;
    cout << "Gender: " << person_1.gender << endl;
    cout << "Marital Status: " << person_1.maritalStatus << endl;
    cout << "Color: " << person_1.favouriteColor << endl;

    cout << endl
         << endl;

    return 0;
}
#include <iostream>

using namespace std;

//* Enums

enum Gender
{
    Male,
    Female
};

enum Status
{
    Single = 1,
    Married = 2
};

//* End Enums

//* Structs

struct stPersonAddress
{
    string city;
    string country;
};

struct stPersonSalary
{
    float monthlySalary;
    float yearlySalary;
};

struct stPersonInformation
{
    string name;
    short age;
    stPersonAddress personAddress;
    stPersonSalary personSalary;
    Gender myGender;
    Status myStatus;
};

//* End Structs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    // Gender myGender;
    // Status myStatus;

    stPersonInformation person1;
    person1.name = "Kifah Saloum";
    person1.age = 24;
    person1.personAddress.country = "Syria";
    person1.personAddress.city = "Shahba";
    person1.personSalary.monthlySalary = 1000;
    person1.personSalary.yearlySalary = 12000;
    person1.myGender = Gender::Male;
    person1.myStatus = Status::Single;

    cout << "Person Name: " << person1.name << endl;
    cout << "Person Age: " << person1.age << endl;
    cout << "Person City: " << person1.personAddress.city << endl;
    cout << "Person Country: " << person1.personAddress.country << endl;
    cout << "Person Monthly Salary: " << person1.personSalary.monthlySalary << endl;
    cout << "Person Yearly Salary: " << person1.personSalary.yearlySalary << endl;
    cout << "Person Gender: " << person1.myGender << endl;
    cout << "Person Marred: " << person1.myStatus << endl;

    cout << endl
         << endl;

    return 0;
}